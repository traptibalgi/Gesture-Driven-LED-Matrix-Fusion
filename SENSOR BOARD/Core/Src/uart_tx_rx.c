/**
* @file misc.c
* @brief
*
* Main function
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#include "uart_tx_rx.h"
#include "stm32f411xe.h"
#include<stdio.h>
#include "SPI.h"



typedef struct uart_parameters_t{
	uint32_t baudrate;
	uint32_t div_mantissa;
	uint32_t div_fraction;
}uart_parameters_s;

/*
 * Function Purpose: Function for initialization for UART.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void uart_init(void)
{
	  RCC->APB1ENR |= RCC_APB1ENR_USART2EN;
	  RCC->AHB1ENR |=  RCC_AHB1ENR_GPIOAEN;
	  GPIOA->MODER |= (2U <<4)| (2U <<6);
	  GPIOA->AFR[0] |= (7U <<8) | (7U <<12);
	  USART2->CR1 |= USART_CR1_UE_Msk;
	  USART2->BRR = 0x683;
	  USART2->CR1 |= (USART_CR1_EN | USART_CR1_RXNE_INTERRUPT | MODE_SET(1)) ;

	  USART2->CR1 |= MODE_SET(RX_EN) | MODE_SET(TX_EN);
	  NVIC_SetPriority(USART2_IRQn,2);
	  NVIC_EnableIRQ(USART2_IRQn);



}

/*
 * Function Purpose: Function for UART Handler.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void USART2_IRQHandler(void)
{
	USART2->CR1&= ~(USART_CR1_RXNE_INTERRUPT); /*Disable interrupt*/
	uint8_t data = USART2->DR;					/*Copy the data received*/
 	USART2->DR = data;
	while(((USART2->SR)& (1U<<6)) == 0); /*TC (Transmission complete bit )*/
	if(data == 1)
	{
		GPIOD-> BSRR |= PIN15;			// Turn ON the blue LED
		GPIOD-> BSRR |= PIN12;			// Turn ON the green LED
		GPIOD-> BSRR |= PIN13;			// Turn ON the green LED
		GPIOD-> BSRR |= PIN14;			// Turn ON the red LED
		for(int i = 0; i < 1000; i++)
		{
			for(int j = 0;j < 100; j++);
		}
		GPIOD-> BSRR |= PIN13 << 16;	// Turn OFF the green LED
		GPIOD-> BSRR |= PIN12 << 16;
		GPIOD-> BSRR |= PIN14 << 16;
		GPIOD-> BSRR |= PIN15 << 16;
	}
	USART2->CR1|= (USART_CR1_RXNE_INTERRUPT);

}

/*
 * Function Purpose: Function to print character.
 *
 * Parameters: Character to be printed
 *
 * Returns: none
 *
 */
void print_char (uint8_t c)
{
	USART2->DR = c;
    while (!(USART2->SR & USART_SR_TXE)); // Wait for transmission to complete
}
