/**
* @file misc.c
* @brief
*
* Miscellaneous functions
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#include <GPIO.h>
#include "stm32f411xe.h"

/*
 * Function Purpose: GPIO initialization.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void MX_GPIO_Init(void)
{
	RCC->AHB1ENR |= (RCC_GPIOA_EN | RCC_GPIOB_EN);				// Enable clock for GPIO ports
	GPIOA->MODER |= ((1 << 8) | (1 << 9));		// Analog mode for PA4
	GPIOB->MODER |= ((1 << 0) | (1 << 1));	// Analog mode for PB0
	GPIOB->MODER |= ((1 << 2) | (1 << 3));		// Analog mode for PB1

	RCC->AHB1ENR |= (RCC_GPIOA_EN | RCC_GPIOE_EN);	// Enable clock for GPIO ports
	GPIOE->MODER |= (1 << 6);						// PE3 configured as output pin

	GPIOA->MODER |= ((1 << 11) | (1 << 13) | (1 << 15));		// Configured as alternate function
	GPIOA->OSPEEDR |= 0x0000FC00; // Set pin 5/6/7 to very high speed mode (0b11)
	GPIOA->AFR[0] = ((0b0101 << 20)| (0b0101 << 24) | (0b0101 << 28));				// SPI1 function

	// LEDs
	// enable GPIOD clock, bit 3 on AHB1ENR
	// setup LEDs
	RCC->AHB1ENR |= (RCC_GPIOD_EN);	//Enable clock for GPIO ports
	GPIOD->MODER |= GPIOD_PIN12_OP;					//Configured as output pin
	GPIOD->MODER |= GPIOD_PIN13_OP;					// Configured as output pin
	GPIOD->MODER |= GPIOD_PIN14_OP;					//Configured as output pin
	GPIOD->MODER |= GPIOD_PIN15_OP;					// Configured as output pin

	GPIOE->ODR |= (1 << 3); // disable
}

/*
 * Function Purpose: Delay.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void delay(void)
{
	for (int i = 0; i < 10000; i++)
	{
	    for (int j = 0; j < 10; j++)
	    {

	    }
	}
}
