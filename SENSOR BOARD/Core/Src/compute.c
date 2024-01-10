#include "compute.h"
#include "stm32f411xe.h"
#include "SPI.h"

enum States {
	DEFAULT = 0,
    UP = 1,
    DOWN = 2,
    LEFT = 3,
    RIGHT = 4,
};

/*
 * Function Purpose: Function for computing the direction based on the sensor input
 *
 * Parameters: The x, y and z values of the accelerometer
 *
 * Returns: none
 *
 */
void acc_compute(int acc_xval, int acc_yval, int acc_zval, int16_t gyro_x_data, int16_t gyro_y_data, int16_t gyro_z_data)
{
	static enum States status = DEFAULT;
	static enum States prev_status = DEFAULT;
	// If motion detected
	if ((gyro_x_data > 10) || (gyro_y_data > 10) || (gyro_z_data > 10) || (gyro_x_data < -10) || (gyro_y_data < -10) || (gyro_z_data < -10))
	{
		// 1st for up
		if (acc_yval > 70)
		{
			status = UP;
		}
		// For down
		else if (acc_yval < (-40))
		{
			status = DOWN;
		}
		// For left
		else if (acc_zval < (-50))
		{
			status = LEFT;
		}
		// For right
		else if (acc_zval > 55)
		{
			status = RIGHT;
		}
		else
		{
			status = DEFAULT;
		}
	}
	if (status != prev_status)
	{
		USART2->DR = status + '0' ;
		while(((USART2->SR)& (1U<<6)) == 0);
	}
	prev_status = status;
}

/*
 * Function Purpose: Function for getting the ADC values and transmitting over UART
 *
 * Parameters: Data to be converted
 *
 * Returns: none
 *
 */
int convertAndTransmit(uint8_t *buffer)
{
    // Start ADC conversion
    ADC1->CR2 |= (1 << 30);
    // Wait until conversion is finish
    while (!((ADC1->CR2) & (0x0002)));

    int value = ADC1->DR;
    value = value - 512;
    int result = value;
    twosComplementToASCII(value);
    // printbuffer(0);

    //value = ( ( ( (double)(value * 5)/1024) - 1.65 ) / 0.330 );
    //int d = 0;
    //d = 335 - value;
    //value = d*1.384;

    /*int p = 0;

    if (value < 10) {
        buffer[p++] = '0' + value; // Convert single digit directly
    } else {
        do {
            int digit = value % 10;
            buffer[p++] = '0' + digit;
            value /= 10;
        } while (value > 0);
    }
    buffer[p] = '\0';

    // Transmit the characters via USART
    for (int i = p - 1; i >= 0; i--) {
        print_char(buffer[i]);
    }*/

    return result;
}
