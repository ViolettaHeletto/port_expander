/*
 * drvPortExpander.c
 *
 *  Created on: Mar 23, 2023
 *      Author: User
 */

#include "drvPortExpander.h"

void PSF8574_TogglePin(I2C_HandleTypeDef *hi2c, uint8_t addr, uint8_t pin)  {
	static uint8_t data = 0;
	data ^= (1 << pin);

	HAL_I2C_Master_Transmit(hi2c, (addr << 1), &data, sizeof(data), HAL_MAX_DELAY);
}

