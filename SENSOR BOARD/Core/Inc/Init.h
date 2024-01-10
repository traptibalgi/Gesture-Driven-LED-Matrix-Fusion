/*******************************************************************************
 * Copyright (C) 2023 by Trapti Damodar Balgi
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. <Student Name> and the University of Colorado are not liable for
 * any misuse of this material.
 * ****************************************************************************/

/**
 * @file    Init.h
 * @brief 	Initialization functions header
 *
 * @author  Trapti Damodar Balgi
 * @date    10/20/2023
 *
 */

#ifndef SRC_INIT_H_
#define SRC_INIT_H_

#define RCC_GPIOA_EN (0b01)				//Clock enable for GPIOA
#define RCC_GPIOD_EN (0b01 << 3)		//Clock enable for GPIOD
#define RCC_TIM4_EN (0b100)				//Clock enable for Timer 4
#define RCC_TIM2_EN (0b01)				//Clock enable for Timer 2

#define GPIOA_PORT0_INPUT (0b11)		//Switch input at PortA Pin0
#define GPIOD_PIN12_OP (0b01 << 24)		//Green LED - PortD Pin 12
#define GPIOD_PIN15_OP (0b01 << 30)		//Blue LED - PortD Pin15

#define PIN12 (0b01 << 12)
#define PIN15 (0b01 << 15)

#define TIM4_CR1_CEN (0b01)				//Counter Enable for Timer 1
#define TIM4_DIER_UIE (0b10)			//Enabled Update Interrupt
#define TIM4_SR_UIF (0b01)				//Update Interrupt Flag - set when ISR called/Interrupt Set

#define EXTI_IMR_PORTA0 (0b01)			//External interrupt not masked for Port A Pin 0 (Button)
#define EXTI_RTSR_PORTA0 (0b01)			//Rising Trigger Enabled

#define GPIOD_ALT_FN (1<<25)			//	Alt function for GPIOD for PD12
#define GPIOD_ALT_FN_02 (1<<17)			//	Alt function AF02
#define TIM4_PWM_MODE_1 (6<<4)			// PWM mode 1
#define TIM4_PRELOAD_REG_EN (1<<3)		// Enable preload register
#define TIM4_CH1_OUTPUT (3<<0)			//	Make C1 output channel
#define TIM4_CAPTURE_COMPARE_EN (1<<0)			//	Enable capture/compare
#define TIM4_POLARITY_HIGH (1<<1)		// CC1P Polarity set to active high
#define TIM4_AUTO_PRELOAD_REG_EN (1<<7)		// Enable auto pre-load
#define TIM4_UPDATE_GENERATION (1<<0)		// Enable update generation

#define TIM2_CR1_CEN (0b01)					//Counter Enable for Timer 1
#define TIM2_DIER_UIE (0b01)				//Enabled Update Interrupt
#define TIM2_SR_UIF (0b01)					//Update Interrupt Flag - set when ISR called/Interrupt Set

#endif /* SRC_INIT_H_ */
