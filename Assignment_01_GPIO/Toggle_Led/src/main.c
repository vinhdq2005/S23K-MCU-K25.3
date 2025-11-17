#include "S32K144.h"
#include "port.h"
#include "gpio.h"

#define LED_RED_PIN     15      // PTD15
#define LED_GREEN_PIN   16      // PTD16
#define BTN0_PIN        12      // PTC12
#define BTN1_PIN        13      // PTC13

void delay()
{
    for (volatile int i = 0; i < 300000; i++);
}

int main(void)
{
    /* Bật clock cho PORTD và PORTC */
    PORT_EnableClock(IP_PTD);
    PORT_EnableClock(IP_PTC);

    /* Cấu hình MUX = 1 (GPIO mode) */
    PORT_SetMux(IP_PTD, LED_RED_PIN, MUX_ALT1);
    PORT_SetMux(IP_PTD, LED_GREEN_PIN, MUX_ALT1);
    PORT_SetMux(IP_PTC, BTN0_PIN, MUX_ALT1);
    PORT_SetMux(IP_PTC, BTN1_PIN, MUX_ALT1);

    /* Set direction */
    GPIO_SetDirection(IP_PTD, LED_RED_PIN, 1);       // output
    GPIO_SetDirection(IP_PTD, LED_GREEN_PIN, 1);     // output

    GPIO_SetDirection(IP_PTC, BTN0_PIN, 0);          // input
    GPIO_SetDirection(IP_PTC, BTN1_PIN, 0);          // input

    while (1)
    {
        if (!GPIO_Read(IP_PTC, BTN0_PIN))
        {
            GPIO_Toggle(IP_PTD, LED_RED_PIN);
            delay();
        }

        if (!GPIO_Read(IP_PTC, BTN1_PIN))
        {
            GPIO_Toggle(IP_PTD, LED_GREEN_PIN);
            delay();
        }
    }
}
