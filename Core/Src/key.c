/***********************************************************
按键扫描+判断（3行法）
************************************************************/
#include "key.h"

#define	KEY1 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0)
#define	KEY2 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1)
#define	KEY3 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_2)
#define	KEY4 HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)
#define KEYPORT 0Xf0|(KEY4<<3)|(KEY3<<2)|(KEY2<<1)|KEY1	//高四位1111，第四位为按键，0为按下

uint8_t trg, cont;	//单按\长按


void Key_Scan(void)
{
	uint8_t readdata = (KEYPORT) ^ 0xff;
	trg = readdata & (readdata ^ cont);
	cont = readdata;
}

