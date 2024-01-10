/**
* @file SPI.c
* @brief
*
* Functions for the L3GD20 SPI-based gyroscope
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#include "stm32f411xe.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*
 * Function Purpose: Converts a number represented in two's complement to ASCII.
 *
 * Parameters: Number represented in two's complement
 *
 * Returns: none
 *
 */
void twosComplementToASCII(int num)
{
	char buffer[20];

    // Determine the sign
    int isNegative = (num < 0);

    // If the number is negative, convert its absolute value
    if (isNegative) {
        num = -num;
    }

    // Process digits in reverse order
    int i = 0;
    do
    {
        int digit = num % 10;
        buffer[i++] = '0' + digit;
        num /= 10;
    } while (num > 0);

    // Add '-' for negative numbers
    if (isNegative) {
        buffer[i++] = '-';
    }

    // Add null terminator
    buffer[i] = '\0';

    // Reverse the string
    int start = 0;
    int end = i - 1;

    while (start < end) {
        // Swap characters
        char temp = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

/*
 * Function Purpose: SPI write for L3GD20 gyroscope.
 *
 * Parameters: The register address to be written & the data to be written
 *
 * Returns: none
 *
 * @references
 * 1) https://github.com/fcayci/stm32f4-bare-metal/blob/master/projects/spi/spi.c
 *
 */
void spi_write(uint8_t reg, uint8_t data)
{
    GPIOE->ODR &= ~(1U << 3); 	// enable
    // Bit 15 is 0 for write
    uint32_t frame = 0;
    frame = data;
    frame |= (uint16_t)(reg << 8);
    // Send data
    SPI1->DR = frame;
    // wait until transmit is done
    while (!(SPI1->SR & (1 << 1)));
    // wait until rx buf is not empty
    while (!(SPI1->SR & (1 << 0)));
    GPIOE->ODR |= (1 << 3); 	// disable
    (void)SPI1->DR; // dummy read
}

/*
 * Function Purpose: SPI read for L3GD20 gyroscope.
 *
 * Parameters: The register address to be read from
 *
 * Returns: The data read from the register
 *
 * @references
 * 1) https://github.com/fcayci/stm32f4-bare-metal/blob/master/projects/spi/spi.c
 *
 */
uint8_t spi_read(uint8_t reg)
{
    GPIOE->ODR &= ~(1U << 3); 	// enable
    // bit 15 is 1 for read
    uint16_t frame = 0;
    frame |= (uint16_t)(reg << 8);
    frame |= (1 << 15); 		// read bit
    // Send data
    SPI1->DR = frame;
    // wait until tx buf is empty
    while (!(SPI1->SR & (1 << 1)));
    // wait until rx buf is not empty
    while (!(SPI1->SR & (1 << 0)));
    uint8_t b = (uint8_t)SPI1->DR;
    GPIOE->ODR |= (1 << 3); 	// disable
    return b;
}

/*
 * Function Purpose: SPI initialization for L3GD20 gyroscope.
 *
 * Parameters: none
 *
 * Returns: none
 *
 * @references
 * 1) https://github.com/fcayci/stm32f4-bare-metal/blob/master/projects/spi/spi.c
 *
 */
void SPI1_Init(void)
{
    RCC->APB2ENR |= (1 << 12);		// Enable SPI1 clock
    // clock polarity - CPOL bit 1
    SPI1->CR1 |= (1 << 1);
    // clock phase - CPHA bit 1
    SPI1->CR1 |= (1 << 0);
	// CRC disabled
	SPI1->CR1 |= (1 << 11);		// 16-bit data frame format
	SPI1->CR1 &= ~((1 << 3) | (1 << 4) | (1 << 5));				// Baud rate - fPCLK/2
	//SPI1->CR1 = (0x4 << 3); 	// set baud rate to fPCLK/32
	SPI1->CR1 |= (1 << 9);		// Software slave management enabled
	SPI1->CR1 |= (1 << 8);		// Slave selected
	SPI1->CR1 |= (1 << 2);		// Master configuration
	SPI1->CR1 |= (1 << 6);		// SPI enabled
}

