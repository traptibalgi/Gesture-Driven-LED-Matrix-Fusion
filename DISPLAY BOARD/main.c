/**
* @file main.c
* @brief
*
* Main function
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include<mcs51reg.h>
#include<stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "uart.h"
#include "i2c.h"
#include "WritetoLEDMatrix.h"


_sdcc_external_startup()
{
    AUXR  = 3U<<2;
    return 0;
}

void Init_UART(void)
/*UART initialization*/
{

    TMOD =0x20;         /*Setting to timer0 mode*/
    TH1 = 0xFD;         /*Setting timer higher byte*/
    SCON = 0x50;        /*Setting timer lower byte*/
    TR1 = 1;            /*Start timer*/
}
enum direction{ /*Enum to determine the direction the LED needs to be moved to. */
UP = 1,
DOWN,
LEFT,
RIGHT,

};

void main(void)
{
    Init_UART();
    i2c_init();
    CMOD |= CPS0; /*Run in fperif/2*/
    uint8_t directionString ;
    uint8_t x=0, y =0; /*Coordinates (x,y)*/
    enum direction direction_int;
    writeToIOExpander(y);
    writeToDecoder(x);
    while(1)
    {
        directionString = getchar();

        direction_int = directionString -'0'; /*Converting from string to integer*/

        switch(direction_int)  /*Increment/Decrement coordinates (x,y) based on the direction*/
        {
            case UP:
                if(y>0)
                    y--;
                break;

            case DOWN:
                if(y<3)
                    y++;
                break;

            case RIGHT:
                if(x<3)
                    x++;
                break;

            case LEFT:
                if(x>0)
                    x--;
                break;

            default:
                break;
        }
        writeToIOExpander(y);
        writeToDecoder(x);
    }

}



