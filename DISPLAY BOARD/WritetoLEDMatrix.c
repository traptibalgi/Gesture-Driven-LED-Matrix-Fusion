/**
* @file WritetoLEDMatrix.c
* @brief
*
* Functions for writing to the LED matrix
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#include "WritetoLEDMatrix.h"
#include "i2c.h"

/*
 * Function Purpose: Function to write to the IO expander
 *
 * Parameters: row to be written to
 *
 * Returns: none
 *
 */
void writeToIOExpander(uint8_t y)
{
    uint8_t i2cIOexpander_wr_address = 0x70;    /*Write and read address of the I2C IO expander*/
    uint8_t i2cIOexpander_rd_address = 0x71;
    uint8_t ports =0;
    i2c_start(); /*Start I2C communication*/
    while(i2c_write(i2cIOexpander_wr_address));
    while(i2c_write(ports));
    ports = (1<<y);     /*Selecting row of LED to be turned ON*/
    while(i2c_write(ports));
    i2c_stop();
}

/*
 * Function Purpose: Function to write to the decoder
 *
 * Parameters: column to be written to
 *
 * Returns: none
 *
 */
void writeToDecoder(uint8_t x)
{

    if(x & (0x01))          /*Selecting the Column of the LED to be turned ON*/
        Decoder_A = 1;

    else
        Decoder_A = 0;

    if(x & (0x02))
        Decoder_B = 1;

    else
        Decoder_B = 0;
}
