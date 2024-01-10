/*
 * uart_tx_rx.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Anagha
 */

#ifndef SRC_UART_TX_RX_H_
#define SRC_UART_TX_RX_H_
#include "stm32f411xe.h"
#define BAUDRATE 9600
#define fclk_peripheral 16000000

#define OVER8 (0<<15)
#define USART_CR2_STOP_MASK
#define USART_CR1_EN (1U << 13)
#define USART_CR1_M_MASK (1U <<12)
#define USART_CR1_PARITY_MASK (1U <<10)
#define USART_CR1_PE_INTERRUPT (1U <<8)
#define USART_CR1_RXNE_INTERRUPT (1U << 5)
#define USART_CR1_TX_EN (1U<<3)
#define USART_CR1_RX_EN (1U << 2)
#define MODE_CLEAR (3U<<2)
#define MODE_SET(x) (x<<2)
#define TX_EN (2U)
#define RX_EN (1U)

/*
 * Function Purpose: Function for initialization for UART.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void uart_init(void);

/*
 * Function Purpose: Function for UART Handler.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void USART2_IRQHandler(void);

/*
 * Function Purpose: Function to print character.
 *
 * Parameters: Character to be printed
 *
 * Returns: none
 *
 */
void print_char (uint8_t);

#endif /* SRC_UART_TX_RX_C_ */
