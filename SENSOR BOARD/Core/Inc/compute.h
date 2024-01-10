/**
* @file ADC.h
* @brief
*
* Functions for the ADC
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#ifndef INC_COMPUTE_H_
#define INC_COMPUTE_H_

#include <stdint.h>

/*
 * Function Purpose: Function for computing the direction based on the sensor input
 *
 * Parameters: The x, y and z values of the accelerometer
 *
 * Returns: none
 *
 */
void acc_compute(int , int , int , int16_t , int16_t , int16_t );

/*
 * Function Purpose: Function for getting the ADC values and transmitting over UART
 *
 * Parameters: Data to be converted
 *
 * Returns: none
 *
 */
int convertAndTransmit(uint8_t *buffer);

#endif /* INC_COMPUTE_H_ */
