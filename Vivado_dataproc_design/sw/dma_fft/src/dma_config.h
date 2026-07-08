#ifndef DMA_CONFIG_H
#define DMA_CONFIG_H

#include "xparameters.h"
#include "xaxidma.h"
#include "xscugic.h"
#include "xil_types.h"


// ===== ID definitions from xparameters.h =====
#define GIC_DEVICE_ID      XPAR_SCUGIC_0_DEVICE_ID
#define DMA_DEVICE_ID      XPAR_AXI_DMA_0_DEVICE_ID
#define DMA_S2MM_IRQ_ID    XPAR_FABRIC_AXI_DMA_0_S2MM_INTROUT_INTR



// ===== Extern variables defined in dma_config.c =====
extern XAxiDma i_axidma;
extern XScuGic  i_gic;
extern int status;

// ===== Function prototypes =====
void dma_init(void);   // DMA basic configuration
void intr_init(Xil_InterruptHandler irq_handler);  // Interrupt controller and DMA IRQ setup
void start_s2mm(UINTPTR rx_buffer, uint32_t tf_length);
u32 start_mm2s(UINTPTR tx_buffer, uint32_t tf_length);

#endif // DMA_CONFIG_H
