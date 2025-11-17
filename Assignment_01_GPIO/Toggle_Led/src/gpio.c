#include "gpio.h"

/* Config direction */
void GPIO_SetDirection(GPIO_Type *GPIOx, uint8_t pin, uint8_t isOutput)
{
    if (isOutput)
        GPIOx->PDDR |= (1 << pin);
    else
        GPIOx->PDDR &= ~(1 << pin);
}

/* Write pin */
void GPIO_Write(GPIO_Type *GPIOx, uint8_t pin, uint8_t value)
{
    if (value)
        GPIOx->PSOR = (1 << pin);  // set
    else
        GPIOx->PCOR = (1 << pin);  // clear
}

/* Toggle pin */
void GPIO_Toggle(GPIO_Type *GPIOx, uint8_t pin)
{
    GPIOx->PTOR = (1 << pin);
}

/* Read input */
uint8_t GPIO_Read(GPIO_Type *GPIOx, uint8_t pin)
{
    return (GPIOx->PDIR >> pin) & 1;
}
