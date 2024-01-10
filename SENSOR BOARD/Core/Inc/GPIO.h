/**
* @file misc.h
* @brief
*
* Miscellaneous functions
*
* @author Trapti Damodar Balgi & Anagha Adithya
* @date 17th December 2023
* @version 1.0
* @references
*
*/

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

#include <stdint.h>

#define RCC_TIM1_EN (0b01)					// Clock enable for TIM1
#define RCC_GPIOA_EN (0b01)					// Clock enable for GPIOA
#define RCC_GPIOB_EN (0b01 << 1)					// Clock enable for GPIOB
#define RCC_GPIOE_EN (0b01 << 4)		// Clock enable for GPIOE

#define RCC_GPIOD_EN (0b01 << 3)		// Clock enable for GPIOD
#define GPIOD_PIN12_OP (0b01 << 24)		// Green LED - PortD Pin 12
#define GPIOD_PIN13_OP (0b01 << 26)
#define GPIOD_PIN14_OP (0b01 << 28)
#define GPIOD_PIN15_OP (0b01 << 30)		// Blue LED - PortD Pin15
#define PIN12 (0b01 << 12)
#define PIN13 (0b01 << 13)
#define PIN14 (0b01 << 14)
#define PIN15 (0b01 << 15)

#define L3GD20_WHO_AM_I_ADDR          0x0F  /* device identification register */
#define L3GD20_CTRL_REG1_ADDR         0x20  /* Control register 1 */
#define L3GD20_CTRL_REG2_ADDR         0x21  /* Control register 2 */
#define L3GD20_CTRL_REG3_ADDR         0x22  /* Control register 3 */
#define L3GD20_CTRL_REG4_ADDR         0x23  /* Control register 4 */
#define L3GD20_CTRL_REG5_ADDR         0x24  /* Control register 5 */
#define L3GD20_REFERENCE_REG_ADDR     0x25  /* Reference register */
#define L3GD20_OUT_TEMP_ADDR          0x26  /* Out temp register */
#define L3GD20_STATUS_REG_ADDR        0x27  /* Status register */
#define L3GD20_OUT_X_L_ADDR           0x28  /* Output Register X */
#define L3GD20_OUT_X_H_ADDR           0x29  /* Output Register X */
#define L3GD20_OUT_Y_L_ADDR           0x2A  /* Output Register Y */
#define L3GD20_OUT_Y_H_ADDR           0x2B  /* Output Register Y */
#define L3GD20_OUT_Z_L_ADDR           0x2C  /* Output Register Z */
#define L3GD20_OUT_Z_H_ADDR           0x2D  /* Output Register Z */

/*
 * Function Purpose: GPIO initialization.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void MX_GPIO_Init(void);

/*
 * Function Purpose: Delay.
 *
 * Parameters: none
 *
 * Returns: none
 *
 */
void delay(void);

#endif /* INC_GPIO_H_ */
