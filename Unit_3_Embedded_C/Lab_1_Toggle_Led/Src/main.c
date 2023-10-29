/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include "Platform_Types.h"


#define 	RCC_BASE			0X40021000
#define 	GPIOA_BASE			0X40010800

#define 	APB2ENR				*(vuint32_t*)(RCC_BASE+0X18)
#define		CRH					*(vuint32_t*)(GPIOA_BASE+0X04)
#define 	ODR					*(vuint32_t*)(GPIOA_BASE+0X0C)




int main(void)
{
	APB2ENR |= (1<<2);
	CRH &= 0XFF0FFFFF;
	CRH |= 0X00200000;
	int i;
    /* Loop forever */
	while(1){
	ODR |= (1<<13);
	for(i = 0; i<5000; i++);
	ODR &= ~(1<<13);
	for(i = 0; i<5000; i++);
	}
}
