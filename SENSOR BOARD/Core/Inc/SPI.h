/**
* @file SPI.h
* @brief
*
* Functions for the L3GD20 SPI-based gyroscope
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#ifndef INC_SPI_H_
#define INC_SPI_H_

#define PIN12 (0b01 << 12)
#define PIN13 (0b01 << 13)
#define PIN14 (0b01 << 14)
#define PIN15 (0b01 << 15)

/*
 * Function Purpose: Converts a number represented in two's complement to ASCII.
 *
 * Parameters: Number represented in two's complement
 *
 * Returns: none
 *
 */
void twosComplementToASCII(int);

/*
 * Function Purpose: SPI write for L3GD20 gyroscope.
 *
 * Parameters: The register address to be written & the data to be written
 *
 * Returns: none
 *
 */
void spi_write(uint8_t, uint8_t);

/*
 * Function Purpose: SPI read for L3GD20 gyroscope.
 *
 * Parameters: The register address to be read from
 *
 * Returns: The data read from the register
 *
 */
uint8_t spi_read(uint8_t);

/*
 * Function Purpose: SPI initialization for L3GD20 gyroscope.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void SPI1_Init(void);

#endif /* INC_SPI_H_ */
