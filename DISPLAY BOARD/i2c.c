/**
* @file I2C.c
* @brief
*
* Functions for I2C
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#include "i2c.h"
#include "string2hex.h"

/*
 * Function Purpose: Function to initialize I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_init(void)
/*I2C initialization*/
{
    SDA = 1;
    SCL = 1;
}

/*
 * Function Purpose: Function to send start sequence on I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_start(void)
{
    /*SDA |__
     SCL --|__
     SDA goes low when SDL is high */
    SDA = 1;
    SCL = 1;
    delay(HalfBit);
    SDA =0;
    delay(HalfBit);
}

/*
 * Function Purpose: Function to send restart sequence on I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_Restart(void) /*Restart sequence for i2c*/
{
    SCL =0;
    delay(HalfBit/2);
    SDA =1;
    delay(HalfBit/2);

    SCL = 1;
    delay(HalfBit/2);
    SDA =0;
    delay(HalfBit/2);
}

/*
 * Function Purpose: Function to send stop sequence on I2C
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void i2c_stop(void) /*When SCL is high, SDA should go from Low to HIGH*/
{
    SCL= 0;
    delay(HalfBit/2);
    SDA = 0;
    delay(HalfBit/2);
    SCL =1;
    delay(HalfBit/2);
    SDA= 1;
    delay(HalfBit/2);

}

/*
 * Function Purpose: Function to write data on an I2C device
 *
 * Parameters: byte to be written
 *
 * Returns: Status of write
 *
 */
__bit i2c_write(uint8_t byte)
{
    int i;
    for(i=0; i<8;i++)
    {
        SCL = 0;                /*Data changes when clock is low*/
        delay(HalfBit/2);
        if( byte > 0x7F)
        {
            SDA = 1;
        }

        else
        {
             SDA = 0;
        }
        byte = byte<<1;
        delay(HalfBit/2);
        SCL =1;             /*Clock goes high and the data is sampled at the */
        delay(HalfBit);
    }
    SCL = 0;
    SDA =1;
    delay(HalfBit);
    SCL =1;
    delay(HalfBit);
    return SDA;
}

/*
 * Function Purpose: Function to read data from an I2C device
 *
 * Parameters: none
 *
 * Returns: data read
 *
 */
uint8_t i2c_read(void)
{
    uint8_t i, d, RxData =0;
    for(i=0; i<8; i++) /*Read the i2c data on the bus*/
    {
        SCL =0;
        SDA=1;
        delay(HalfBit);
        SCL =1;
        delay(HalfBit/2);
        d = SDA;
        RxData |= (d<<(7-i));
        delay(HalfBit/2);
    }
    return RxData;
}

/*
 * Function Purpose: Function to create a delay
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void delay(int d) /*Delay function*/
{
for(int i=0; i<d; i++);
return;
}


