/**
* @file timer.h
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
#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include <stdint.h>

extern volatile uint8_t tim_flag;

/*
 * Function Purpose: Timer 2 initialization.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void MX_TIM2_Init(void);

/*
 * Function Purpose: ISR for Timer 2 Interrupt
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void TIM2_IRQHandler(void);

#endif /* INC_TIMER_H_ */
