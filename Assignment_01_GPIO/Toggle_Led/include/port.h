#ifndef PORT_H
#define PORT_H

#include <S32K144.h>

typedef enum {
    MUX_DISABLED = 0b000,
    MUX_ALT1     = 0b001,
    MUX_ALT2     = 0b010,
    MUX_ALT3     = 0b011,
    MUX_ALT4     = 0b100,
    MUX_ALT5     = 0b101,
    MUX_ALT6     = 0b110,
    MUX_ALT7     = 0b111
} port_mux_t;

/*Cap clock cho Port*/
void PORT_EnableClock(PORT_Type *PORTx);

/*Cau hinh chuc nang cho chan*/
void PORT_SetMux(PORT_Type *PORTx, uint32_t pin, port_mux_t mux);

#endif