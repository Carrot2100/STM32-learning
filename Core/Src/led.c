#include "led.h"

//函数名：LED_Disp
//入口参数：ucLed
//出口参数：void
//函数功能：实现指定的LED的点亮
void LED_Disp(unsigned char ucLed)
{

	HAL_GPIO_WritePin(GPIOC, ucLed<<8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
	
}
