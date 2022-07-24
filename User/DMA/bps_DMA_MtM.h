#ifndef __BPS_DMA_MTM_H__
#define __BPS_DMA_MTM_H__

#include "stm32f10x.h" 
#define BUFFER_SIZE     32
#define MTM_DMA_CLK       RCC_AHBPeriph_DMA1
#define MTM_DMA_CHANNEL   DMA1_Channel6

uint8_t Buffercmp(const uint32_t* pBuffer, 
                  uint32_t* pBuffer1, uint16_t BufferLength);
void MtM_DMA_Config(void);
#endif
