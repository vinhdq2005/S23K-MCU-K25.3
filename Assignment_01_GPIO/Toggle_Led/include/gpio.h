#ifndef GPIO_H
#define GPIO_H

#include "S32K144.h"

/* Set in/out direction */
void GPIO_SetDirection(GPIO_Type *GPIOx, uint8_t pin, uint8_t isOutput);

/* Write pin */
void GPIO_Write(GPIO_Type *GPIOx, uint8_t pin, uint8_t value);

/* Toggle pin */
void GPIO_Toggle(GPIO_Type *GPIOx, uint8_t pin);

/* Read pin */
uint8_t GPIO_Read(GPIO_Type *GPIOx, uint8_t pin);

#endif
