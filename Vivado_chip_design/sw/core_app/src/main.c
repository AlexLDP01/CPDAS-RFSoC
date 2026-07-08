/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */
#include "xtime_l.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "xaxidma.h"
#include "xscugic.h"
#include "xil_exception.h"

#include "xstatus.h"
#include "xrfdc.h"
#include "rfdc_init.h"

#include "NE10.h"
#include "dma_config.h"
#include "trace_formats.h"
#include "trace_2.h"
#include "ref_conj.h"
//#include "xil_cache.h"

//=========================================================================
//					ID's definitions from xparameters.h
//=========================================================================
#define gic_id 				XPAR_SCUGIC_0_DEVICE_ID
#define dma_id 				XPAR_AXI_DMA_0_DEVICE_ID
#define dma_s2mm_irq_id		XPAR_FABRIC_AXI_DMA_0_S2MM_INTROUT_INTR
//=========================================================================
//					Initialize FIFO with reference
//=========================================================================
#define NUM_FRAMES (trace_2_LEN / TRACE_WIN)
volatile static int fill_fifo = 2;
//=========================================================================
//						      Global Flags
//=========================================================================
volatile int rxbuf_full[2] 	= {0, 0};   // IRQ sets, main clears
volatile int buf_select 	= 0;        // buffer toggle mechanism
volatile bool rearm    		= false;    // recover DMA transfer chain from main if IRQ finds all buffers full
volatile int dma_tx_done  	= 0;   	    // MM2S completion flag ( DDR -> PL  ) (para pruebas, borrar al final)
int st;
int end = 0;
static XRFdc RFdcInst;
//=========================================================================
//								 Arrays
//=========================================================================
static volatile uint32_t 		fft_wr = 0;
// fft
static ne10_fft_r2c_cfg_int16_t fft_cfg_obj = NULL; 	// Configuration structure for NEON FFTs
static ne10_int16_t 			fft_in_buffer[2][NFFT] 					 __attribute__((aligned(32))); // Input array. Size for samples + padding
static ne10_fft_cpx_int16_t 	fft_out_buffer[NUM_FRAMES][RES_FFT_LEN] __attribute__((aligned(32))); // Output array of samples, same size to avoid overflow
// correlation
static ne10_fft_r2c_cfg_int32_t ifft_cfg_obj = NULL;
static ne10_fft_cpx_int32_t 	freq_product_buffer[NUM_FRAMES][RES_FFT_LEN] __attribute__((aligned(32)));
static ne10_int32_t 			corr_out_buffer[NUM_FRAMES][NFFT] 			 __attribute__((aligned(32)));
//=========================================================================
//							DMA IRQ handler
//=========================================================================
static void dma_irq_handler(void *CallbackRef)
{
//	xil_printf("[DMA IRQ] MM2S\r\n");
    XAxiDma *i_axidma_ptr = (XAxiDma *)CallbackRef; // Points to i_axidma, driver instance declared in dma_config.c
    u32 irq_s2mm = XAxiDma_IntrGetIrq(i_axidma_ptr, XAXIDMA_DEVICE_TO_DMA); // interrupt bits from S2MM channel
    //u32 irq_mm2s = XAxiDma_IntrGetIrq(i_axidma_ptr, XAXIDMA_DMA_TO_DEVICE); // interrupt bits from MM2S channel
    // ================================
    //   S2MM CHANNEL (PL -> DDR)
    // =================================
//    xil_printf("IRQ outside \r\n");
    if (irq_s2mm) {
//    	xil_printf("IRQ inside \r\n");
        // Acknowledge any pending S2MM interrupt bits
        XAxiDma_IntrAckIrq(i_axidma_ptr, irq_s2mm, XAXIDMA_DEVICE_TO_DMA);
        // Check if any interrupt cause was error
        if (irq_s2mm & XAXIDMA_IRQ_ERROR_MASK) {
        	xil_printf("[DMA IRQ] S2MM ERROR\r\n");
            u32 sr = XAxiDma_ReadReg(i_axidma_ptr->RegBase, XAXIDMA_RX_OFFSET + XAXIDMA_SR_OFFSET);

            xil_printf("[DMA IRQ] S2MM ERROR\r\n");
            xil_printf("S2MM_DMASR = 0x%08x\r\n", sr);

            if (sr & XAXIDMA_HALTED_MASK)      xil_printf(" - HALTED\r\n");
            if (sr & XAXIDMA_IDLE_MASK)        xil_printf(" - IDLE\r\n");
            if (sr & XAXIDMA_ERR_INTERNAL_MASK)xil_printf(" - INTERNAL ERROR\r\n");
            if (sr & XAXIDMA_ERR_SLAVE_MASK)   xil_printf(" - SLAVE ERROR\r\n");
            if (sr & XAXIDMA_ERR_DECODE_MASK)  xil_printf(" - DECODE ERROR\r\n");
            if (sr & XAXIDMA_ERR_SG_INT_MASK)  xil_printf(" - SG INTERNAL ERROR\r\n");
            if (sr & XAXIDMA_ERR_SG_SLV_MASK)  xil_printf(" - SG SLAVE ERROR\r\n");
            if (sr & XAXIDMA_ERR_SG_DEC_MASK)  xil_printf(" - SG DECODE ERROR\r\n");
        }
        // Check if interrupt cause was transfer delayed
        else if (irq_s2mm & XAXIDMA_IRQ_DELAY_MASK) {xil_printf("[DMA IRQ] S2MM transfer delayed\r\n");}
        // Check interrupt cause is IOC (Interrupt On Complete)
        else if (irq_s2mm & XAXIDMA_IRQ_IOC_MASK)
        {
        	fill_fifo ++;
//            xil_printf("[DMA IRQ] S2MM transfer complete for buffer[%d]\r\n", buf_select);
        	rxbuf_full[buf_select]  = 1; // marks previous buffer as full
        	int next = buf_select^1;   // toggle = XOR(buf_select)
        	if(rxbuf_full[next]==0){  // Check if the other buffer is empty
        		buf_select = next;
//        		xil_printf("[DMA IRQ] S2MM transfer start for buffer[%d]\r\n", buf_select);
        		start_s2mm((UINTPTR)fft_in_buffer[buf_select], TRANSFER_LENGTH);
        	}
        	else{
//        		xil_printf("[DMA IRQ] All buffers full\r\n");
        		rearm = true;
        	}
        }
    }
}

void correlation_window(int buffer_index);
void fill_fifo_trace();

static void print_buffers_info(void)
{
    xil_printf("fft_in_buffer[0]       base = 0x%08lx  length = %lu bytes\r\n",
        (unsigned long)&fft_in_buffer[0][0],
        (unsigned long)sizeof(fft_in_buffer[0]));

    xil_printf("fft_in_buffer[1]       base = 0x%08lx  length = %lu bytes\r\n",
        (unsigned long)&fft_in_buffer[1][0],
        (unsigned long)sizeof(fft_in_buffer[1]));

    xil_printf("fft_out_buffer       base = 0x%08lx  length = %lu bytes\r\n",
        (unsigned long)&fft_out_buffer[0][0],
        (unsigned long)sizeof(fft_out_buffer));

    xil_printf("freq_product_buffer  base = 0x%08lx  length = %lu bytes\r\n",
        (unsigned long)&freq_product_buffer[0][0],
        (unsigned long)sizeof(freq_product_buffer));

    xil_printf("corr_out_buffer      base = 0x%08lx  length = %lu bytes\r\n",
        (unsigned long)&corr_out_buffer[0][0],
        (unsigned long)sizeof(corr_out_buffer));
}
int main(void) {
	XTime tStart, tEnd;
	double exec_time;
	//=========================================================================
    // 								Initialization
	//=========================================================================
	init_platform();
	Xil_DCacheDisable(); // Disabled so DMA transfers bypass cache, FlushRange doesn't work on A53
	xil_printf("------- initialization -------\n");
	if (RFdc_Init(&RFdcInst) != XST_SUCCESS) {
	    xil_printf("RFDC init failed\n");
	    while(1);
	}
	// DMA and Interruptinos Initialization
	dma_init();
	intr_init((Xil_InterruptHandler) dma_irq_handler);
	// Ne10 Init
	ne10_result_t ne10_st = ne10_init_dsp(1);
	if (ne10_st != NE10_OK) {
	    xil_printf("NE10 init failed\n");
	    while(1);
	}
	// FFT/IFFT alloc
	fft_cfg_obj  = ne10_fft_alloc_r2c_int16(NFFT);
	ifft_cfg_obj = ne10_fft_alloc_r2c_int32(NFFT);
	// Init flags
	rxbuf_full[0] = 0;
	rxbuf_full[1] = 0;
	buf_select 	  = 0;
	xil_printf("------------------------------\n\n");
	//=========================================================================
	//									Program
	//=========================================================================
	print_buffers_info();
	XTime_GetTime(&tStart);
	start_s2mm((UINTPTR)fft_in_buffer[buf_select], TRANSFER_LENGTH);
	fill_fifo_trace();
	while(end==0){
		if (rxbuf_full[0]==1){
			correlation_window(0);
			rxbuf_full[0] = 0;
	        if (rearm == true){
				rearm = false;
				buf_select = 0;
				start_s2mm((UINTPTR)fft_in_buffer[buf_select], TRANSFER_LENGTH);
	        }
		}
		if (rxbuf_full[1]==1){
	        correlation_window(1);
	        rxbuf_full[1] = 0;
	        if (rearm == true){
				rearm = false;
				buf_select = 1;
				start_s2mm((UINTPTR)fft_in_buffer[buf_select], TRANSFER_LENGTH);
	        }
		}
		if (fill_fifo > 0) {
		    if (!XAxiDma_Busy(&i_axidma, XAXIDMA_DMA_TO_DEVICE)) {
		        fill_fifo_trace();
		    }
		}
	}
	XTime_GetTime(&tEnd);
	exec_time = (double)(tEnd - tStart) / COUNTS_PER_SECOND;
	xil_printf("\nExecution time: %.6f sec\n", exec_time);
	print_buffers_info();
	cleanup_platform();
	return 0;
}

void fill_fifo_trace(){
	// Fill TX buffer & start MM2S TX
	static int16_t TX_BUFFER[TRACE_WIN];
	static uint32_t bytes_sent = 0;
	static const uint32_t traze_bytes = trace_2_LEN * 2; // 2 <= size of int16_t

	if (bytes_sent + TRANSFER_LENGTH > traze_bytes) {
		xil_printf("No more traces\r\n");
		end = 1;
		return;
	}
	uint32_t wr_pointer = bytes_sent / 2;
	for (uint32_t i = 0; i < TRACE_WIN; i++) {
		TX_BUFFER[i] = trace_2_int16[wr_pointer + i];  // TX_BUFFER: int16_t[TRACE_WIN]
	}
	st = start_mm2s((UINTPTR)TX_BUFFER, TRANSFER_LENGTH); // bytes (2048)
	if (st == XST_SUCCESS) {
		fill_fifo--;
		bytes_sent += TRANSFER_LENGTH;
	}
}

//=========================================================================
//									   FFT
//=========================================================================
void correlation_window(int index) {

	// Pointer to ref_conj_int16 with an offset depending on the window
	const int16_t *fft_ref_conj = &ref_conj_int16[fft_wr * (2 * RES_FFT_LEN)]; // 2x because ref_conj_int16 is interleaved
																	// hence (one complex bin = two int16)
    // Zero-padding
    memset(&fft_in_buffer[index][TRACE_WIN], 0, TRACE_WIN * sizeof(ne10_int16_t));
    if (fft_wr < NUM_FRAMES) {
    	// FFT
        ne10_fft_r2c_1d_int16(fft_out_buffer[fft_wr], fft_in_buffer[index], fft_cfg_obj, 0);
        int max_fft = 0;
        int sat_cnt = 0;

        for (int k = 0; k < RES_FFT_LEN; k++) {
            int ar = fft_out_buffer[fft_wr][k].r;
            int ai = fft_out_buffer[fft_wr][k].i;

            if (ar == 32767 || ar == -32768) sat_cnt++;
            if (ai == 32767 || ai == -32768) sat_cnt++;

            if (abs(ar) > max_fft) max_fft = abs(ar);
            if (abs(ai) > max_fft) max_fft = abs(ai);
        }
        // FREQUENCE PRODUCTO
		for (int k = 0; k < RES_FFT_LEN; k++) {
			int16_t ar = fft_out_buffer[fft_wr][k].r; 		// 	k element of Re(fft)
			int16_t ai = fft_out_buffer[fft_wr][k].i; 		// 	k element of Im(fft)

			int16_t br = fft_ref_conj[2*k + 0]; 			// 	k element of Re(fft_ref_conj)
			int16_t bi = fft_ref_conj[2*k + 1]; 			// 	k element of Im(fft_ref_conj)

			// 													Complex product = (ar+ai*j) * (br+bi*j)
			// 														 		    = (ar*br-ai*bi) + (ar*bi + ai*br)*j
			int32_t pr = ((int32_t)ar*br - (int32_t)ai*bi); // 	Re(Complex product)
			int32_t pi = ((int32_t)ar*bi + (int32_t)ai*br); // 	Im(Complex product)

		    freq_product_buffer[fft_wr][k].r = pr;
		    freq_product_buffer[fft_wr][k].i = pi;
		}
		// IFFT
        ne10_fft_c2r_1d_int32(corr_out_buffer[fft_wr], freq_product_buffer[fft_wr], ifft_cfg_obj, 0);

        fft_wr++;
		xil_printf("fft_wr = %d\n\r", fft_wr);
    }
}
