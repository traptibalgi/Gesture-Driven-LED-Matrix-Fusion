/**
* @file ADC.c
* @brief
*
* Functions for the ADC
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#include "ADC.h"
#include "stm32f411xe.h"

#define RCC_ADC1_EN (0b01 << 8)				// Clock enable for ADC1

/*
 * Function Purpose: Function for initialization for ADC.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void MX_ADC_Init(void)
{
	// Enable the ADC1 and TIM1 which will be the trigger
	RCC->APB2ENR |= (RCC_ADC1_EN);
	// Pre-scaler 6
	ADC->CCR |= (1 << 17);
	// Resolution - 10 bit
	ADC1->CR1 |= (1 << 24);
	// Enable continuous mode
	ADC1->CR2 |= (1 << 1);
	// 1st conversion should be CH4 (0b00100)
	ADC1->SQR3 |= (1 << 2);
	// Set scan mode
	ADC1->CR1 |= (1 << 8);
	// Enable interrupt for EOC
	// ADC1->CR1 |= (1 << 5);
	// NVIC_EnableIRQ(ADC_IRQn);
	// Power ON the ADC - ADON bit
	ADC1->CR2 |= (1 << 0);
}

/*void ADC_IRQHandler (void)
{
	static int i = 0;
	arr[i++] = ADC1->DR;
	//flag1 = 1;
	if (i == 1024)
		i = 0;
	// Start ADC conversion
	ADC1->CR2 |= (1 << 30);
}*/
