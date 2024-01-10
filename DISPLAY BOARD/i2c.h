/**
* @file I2C.h
* @brief
*
* Functions for I2C
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#ifndef I2C_H_INCLUDED
#define I2C_H_INCLUDED

#include <mcs51/8051.h>

#include <at89c51ed2.h>
#include<mcs51reg.h>
#include<stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define SDA P1_4
#define SCL P1_0
#define HalfBit (2U)

/*
 * Function Purpose: Function to initialize I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_init(void);

/*
 * Function Purpose: Function to send start sequence on I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_start(void);

/*
 * Function Purpose: Function to send restart sequence on I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_Restart(void);

/*
 * Function Purpose: Function to send stop sequence on I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_stop(void);

/*
 * Function Purpose: Function to write data on an I2C device
 *
 * Parameters: byte to be written
 *
 * Returns: Status of write
 *
 */
__bit i2c_write(uint8_t);

/*
 * Function Purpose: Function to read data from an I2C device
 *
 * Parameters: none
 *
 * Returns: data read
 *
 */
uint8_t i2c_read(void);

/*
 * Function Purpose: Function to create a delay
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void delay(int);

#endif // I2C_H_INCLUDED
