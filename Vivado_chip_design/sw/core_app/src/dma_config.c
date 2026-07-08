#include "dma_config.h"
#include "xil_exception.h"
#include "xil_printf.h"

// ===== Global instances (defined here, declared as extern in header) =====
XAxiDma i_axidma;               // DMA driver instance
XScuGic  i_gic;                 // General interrupt controller instance
int status = 0;                // Generic status variable


// ===== DMA configuration =====
void dma_init(void)
{
    XAxiDma_Config *dma_conf;

    xil_printf("DMA config \n\r");
    dma_conf = XAxiDma_LookupConfig(DMA_DEVICE_ID);
    if (!dma_conf) {
        xil_printf("XAxiDma_LookupConfig returned NULL\r\n");
        return;
    }

    xil_printf("DMA init \n\r");
    status = XAxiDma_CfgInitialize(&i_axidma, dma_conf);
    if (status != XST_SUCCESS) {
        xil_printf("Error in DMA cfg initialize (status=%d)\n\r", status);
        return;
    }

    // Disable all interrupts sources and acknowledge any pending IRQ to ensure clean boot
    // XAXIDMA_IRQ_ALL_MASK to affect all kind of DMA interrupts (erros, completed, ...) defined in xaxidma_hw.h
    XAxiDma_IntrDisable(&i_axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    XAxiDma_IntrDisable(&i_axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
    XAxiDma_IntrAckIrq (&i_axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    XAxiDma_IntrAckIrq (&i_axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
    XAxiDma_IntrEnable(&i_axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);

//	XAxiDma_Reset(&i_axidma);
//	while(!XAxiDma_ResetIsDone(&i_axidma));
    xil_printf("DMA config done \n\r");
}

// ===== General Interrupt controller and DMA IRQ setup =====
void intr_init(Xil_InterruptHandler irq_handler)
{
    XScuGic_Config *gic_config_ptr;
    // GIC initialization
    gic_config_ptr = XScuGic_LookupConfig(GIC_DEVICE_ID);
    status = XScuGic_CfgInitialize(&i_gic, gic_config_ptr, gic_config_ptr->CpuBaseAddress);
    if (status != XST_SUCCESS) return;
    // Exceptions setup and GIC as the IRQ dispatcher
    Xil_ExceptionInit(); // sets empty handlers as placeholders
    Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,(Xil_ExceptionHandler)XScuGic_InterruptHandler,&i_gic);
    // Connect DMA S2MM IRQ to our handler
    status = XScuGic_Connect(&i_gic, DMA_S2MM_IRQ_ID, irq_handler,&i_axidma);
    if (status != XST_SUCCESS) {
        xil_printf("Error connecting DMA IRQ\n\r");
        return;
    }
    XScuGic_SetPriorityTriggerType(&i_gic, DMA_S2MM_IRQ_ID, 0xA0, 0x1);
    // Enable IRQ source in the GIC and CPU exceptions
    XScuGic_Enable(&i_gic, DMA_S2MM_IRQ_ID);
    Xil_ExceptionEnable();

    xil_printf("Interrupt config done \n\r");
}

void start_s2mm(UINTPTR rx_buffer_ptr, uint32_t tf_length){
	status = XAxiDma_SimpleTransfer(&i_axidma, rx_buffer_ptr, tf_length, XAXIDMA_DEVICE_TO_DMA);
	if (status != XST_SUCCESS){
		xil_printf("[error in start_s2mm] return code: %d\n\r", status);
	}
}

u32 start_mm2s(UINTPTR tx_buffer_ptr, uint32_t tf_length){
	status = XAxiDma_SimpleTransfer(&i_axidma, tx_buffer_ptr, tf_length, XAXIDMA_DMA_TO_DEVICE);
	if (status != XST_SUCCESS){
		xil_printf("[error in start_mm2s] return code: %d\n\r", status);
	}
	return status;
}

