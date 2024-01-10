/**
* @file uart.h
* @brief
*
* Functions for the UART
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED
#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include<mcs51reg.h>
#include<stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * Function Purpose: Function to print a character
 *
 * Parameters: character to be printed
 *
 * Returns: none
 *
 */
int putchar(int);

/*
 * Function Purpose: Function to read a character
 *
 * Parameters: none
 *
 * Returns: character read
 *
 */
int getchar(void);

/*
 * Function Purpose: Function to print a string
 *
 * Parameters: string to be printed
 *
 * Returns: none
 *
 */
int putstr(char *);


/*
 * Function Purpose: Function to echo a character
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
int echo(void);

#endif // UART_H_INCLUDED
