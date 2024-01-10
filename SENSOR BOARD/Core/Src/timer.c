/**
* @file timer.c
* @brief
*
* Function for the timer
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#include "timer.h"
#include "stm32f411xe.h"

#define RCC_TIM2_EN (0b01)				//Clock enable for Timer 2
#define TIM2_CR1_CEN (0b01)				//Counter Enable for Timer 1
#define TIM2_DIER_UIE (0b01)			//Enabled Update Interrupt
#define TIM2_SR_UIF (0b01)				//Update Interrupt Flag - set when ISR called/Interrupt Set

volatile uint8_t tim_flag = 0;

/*
 * Function Purpose: Timer 2 initialization.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void MX_TIM2_Init(void)
{
	RCC->APB1ENR |= RCC_TIM2_EN;					//Enable clock for TIM2
	TIM2->DIER |= TIM2_DIER_UIE;					//Update Interrupt Enabled
	TIM2->PSC = 1599;								//Gives a clock of (16M/1599) = 10000Hz
	TIM2->ARR = 4999;									//For 400ms
	NVIC_EnableIRQ(TIM2_IRQn);						// Enable the interrupt
	TIM2->CR1 |= TIM2_CR1_CEN;						//Counter enable for Timer 2
}


/*
 * Function Purpose: ISR for Timer 2 Interrupt
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void TIM2_IRQHandler(void)
{
	tim_flag = 1;
	TIM2->SR = ~(TIM2_SR_UIF);			//Reseting the interrupt flag
}
