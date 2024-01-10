/**
* @file misc.c
* @brief
*
* Main function
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#include "GPIO.h"
#include "main.h"
#include "stm32f411xe.h"
#include "stdio.h"
#include "stdint.h"
#include "string.h"
#include "Init.h"
#include "SPI.h"
#include "uart_tx_rx.h"
#include "ADC.h"
#include "compute.h"
#include "timer.h"

int16_t rbuf[6];

int main(void)
{

  // Initializations
  MX_GPIO_Init();
  MX_ADC_Init();
  uart_init();
  MX_TIM2_Init();
  SPI1_Init();

  uint8_t xbuffer[4] = {0}, ybuffer[4] = {0}, zbuffer[4] = {0};
  int xval_acc = 0, yval_acc = 0, zval_acc = 0;
  int16_t gyro_x_data = 0, gyro_y_data = 0, gyro_z_data = 0, who_am_i = 0;

  // reboot memory
  spi_write(L3GD20_CTRL_REG5_ADDR, 0x90);
  // Enable axis & normal mode
  spi_write(L3GD20_CTRL_REG1_ADDR, 0x0F);
  // read who am i
  who_am_i = (int8_t)spi_read(L3GD20_WHO_AM_I_ADDR);

  while (1)
  {
	  if (tim_flag)
	  {
		  // 1st conversion should be CH4 (0b00100)
		  ADC1->SQR3 &= ~((1 << 3) | (1 << 0));
		  ADC1->SQR3 |= (1 << 2);
		  xval_acc = convertAndTransmit(xbuffer);

		  // 2nd conversion should be CH8 (0b01000)
		  ADC1->SQR3 &= ~(1 << 2);
		  ADC1->SQR3 |= (1 << 3);
		  yval_acc = convertAndTransmit(ybuffer);

		  // 3rd conversion should be CH9 (0b01001)
		  ADC1->SQR3 |= (1 << 0);
		  zval_acc = convertAndTransmit(zbuffer);

		  // Read values from the gyroscope
		  gyro_x_data = (int8_t)spi_read(L3GD20_OUT_X_H_ADDR);
		  gyro_y_data = (int8_t)spi_read(L3GD20_OUT_Y_H_ADDR);
		  gyro_z_data = (int8_t)spi_read(L3GD20_OUT_Z_H_ADDR);

	      if (gyro_x_data & (1 << 15))
	      {
	    	  gyro_x_data = (int16_t)(~((uint16_t)gyro_x_data) + 1); // Perform two's complement for negative values
	          GPIOD-> BSRR |= PIN15 << 16;		// Turn OFF the blue LED
	      }
	      else
	      {
	    	  // Positive value remains unchanged
	    	  GPIOD-> BSRR |= PIN15;			// Turn ON the blue LED
	      }

	      if (gyro_y_data & (1 << 15))
	      {
	    	 gyro_y_data = (int16_t)(~((uint16_t)gyro_y_data) + 1); // Perform two's complement for negative values
	         GPIOD-> BSRR |= PIN12 << 16;		// Turn OFF the green LED
	      }
	      else
	      {
	         GPIOD-> BSRR |= PIN12;				// Turn ON the green LED
	      }

	      if (gyro_z_data & (1 << 15))
	      {
	    	  gyro_z_data = (int16_t)(~((uint16_t)gyro_z_data) + 1); // Perform two's complement for negative values
	          GPIOD-> BSRR |= PIN13 << 16;		// Turn OFF the green LED
	      }
	      else
	      {
	          // Positive value remains unchanged
	          GPIOD-> BSRR |= PIN13;			// Turn ON the green LED
	      }
	      acc_compute(xval_acc, yval_acc, zval_acc, gyro_x_data, gyro_y_data, gyro_z_data);
		  delay();
	  }
  }
}
