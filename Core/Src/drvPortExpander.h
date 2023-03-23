
#include "main.h"

//I2C_HandleTypeDef hi2c2;

void PSF8574_init (uint8_t addr, I2C_HandleTypeDef * i2c);

void PSF8574_setPin();//побайтная ф-я
void PSF8574_resetPin();//побайтная ф-я
void PSF8574_readPin();

void PSF8574_TogglePin(I2C_HandleTypeDef *hi2c, uint8_t addr, uint8_t pin);

void PSF8574_writePort(); //(побитные и побайтные функции)
void PSF8574_readPort(); //побайтная ф-я

