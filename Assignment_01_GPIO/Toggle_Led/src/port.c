#include "port.h"

void PORT_EnableClock(PORT_Type *PORTx) {
    if (PORTx == IP_PTA) {
        IP_PCC->PCCn[PCC_PORTA_INDEX] |= PCC_PCCn_CGC_MASK;
    } else if (PORTx == IP_PTB) {
        IP_PCC->PCCn[PCC_PORTB_INDEX] |= PCC_PCCn_CGC_MASK;
    } else if (PORTx == IP_PTC) {
        IP_PCC->PCCn[PCC_PORTC_INDEX] |= PCC_PCCn_CGC_MASK;
    } else if (PORTx == IP_PTD) {
        IP_PCC->PCCn[PCC_PORTD_INDEX] |= PCC_PCCn_CGC_MASK;
    } else if (PORTx == IP_PTE) {
        IP_PCC->PCCn[PCC_PORTE_INDEX] |= PCC_PCCn_CGC_MASK;
    }
}

void PORT_SetMux(PORT_Type *PORTx, uint32_t pin, port_mux_t mux) {
    PORTx->PCR[pin] &= ~PORT_PCR_MUX_MASK;          // Clear MUX bits
    PORTx->PCR[pin] |= PORT_PCR_MUX(mux);           // Set new MUX value
}
