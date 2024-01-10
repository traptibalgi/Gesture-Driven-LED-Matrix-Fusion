/**
* @file WritetoLEDMatrix.h
* @brief
*
* Functions for writing to the LED matrix
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
*
*/

#ifndef WRITETOLEDMATRIX_H_INCLUDED
#define WRITETOLEDMATRIX_H_INCLUDED

#include <stdint.h>

#define Decoder_A P1_2
#define Decoder_B P1_3

/*
 * Function Purpose: Function to write to the IO expander
 *
 * Parameters: row to be written to
 *
 * Returns: none
 *
 */
void writeToIOExpander(uint8_t);

/*
 * Function Purpose: Function to write to the decoder
 *
 * Parameters: column to be written to
 *
 * Returns: none
 *
 */
void writeToDecoder(uint8_t);

#endif // WRITETOLEDMATRIX_H_INCLUDED
