/**
* @file uart.c
* @brief
*
* Functions for the UART
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#include "uart.h"

/*
 * Function Purpose: Function to print a character
 *
 * Parameters: character to be printed
 *
 * Returns: none
 *
 */
int putchar(int c)
{

    while(!TI);
    SBUF = c;
    TI =0;
    return c;
}

/*
 * Function Purpose: Function to read a character
 *
 * Parameters: none
 *
 * Returns: character read
 *
 */
int getchar(void)
{

    while(!RI);
    RI =0;
    return SBUF;

}

/*
 * Function Purpose: Function to print a string
 *
 * Parameters: string to be printed
 *
 * Returns: none
 *
 */
int putstr(char *s)
{

    int i=0;
    while (*s)
    {
        putchar(*s++);
        i++;
    }
    return i+1;
}


/*
 * Function Purpose: Function to echo a character
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
int echo(void)
{
    int ch =getchar();
    putchar(ch);
    putchar('\r');
    putchar('\n');
    return ch;
}
