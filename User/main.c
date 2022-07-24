#include "stm32f10x.h"                  // Device header
#include "bps_led.h"
#include "bps_DMA_MtM.h"
extern const uint32_t aSRC_Const_Buffer[BUFFER_SIZE];
extern uint32_t aDST_Buffer[BUFFER_SIZE];

void delay_ms(int n)//ÑÓÊ±º¯Êý
{
	int i;
	while (n--)
	{
		for(i=0;i<5520;i++);
	}
}




int main()
{
	uint8_t n;
	MtM_DMA_Config();
	 DMA_GetFlagStatus(DMA1_FLAG_TC6);
	n=Buffercmp(aSRC_Const_Buffer,aDST_Buffer,32);
	LED_B_GPIO_Config();
	led_B(on);
	delay_ms(3000);
	GPIO_DeInit(GPIOB);
	if(n==1)
	{
		LED_G_GPIO_Config();
		led_G(on);
	}
	else
	{
		LED_R_GPIO_Config();
		led_R(on);
	}
}

