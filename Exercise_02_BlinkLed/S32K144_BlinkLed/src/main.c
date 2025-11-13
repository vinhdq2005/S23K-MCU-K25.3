/* Copyright 2023 NXP */
/* License: BSD 3-clause
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
*/

/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "S32K144.h"

#include <stdio.h>

void delay(volatile int cycles) {
	while(cycles--);
}

int counter, accumulator = 0, limit_value = 1000000;

void blinkLed(GPIO_Type * GPIOn, uint8_t u8PinNumber, uint32_t time) {
	GPIOn -> PTOR |= 1<<u8PinNumber; //Dao bit
	delay(time);

	GPIOn -> PTOR |= 1<<u8PinNumber;
}

int main(void) {
    counter = 0;

    IP_PCC -> PCCn[PCC_PORTD_INDEX]|= PCC_PCCn_CGC_MASK; //Cap clock cho Port D
    IP_PORTD -> PCR[0] |= PORT_PCR_MUX(0b001); //Cau hinh chan pin GPIO
    IP_PORTD -> PCR[15] |= PORT_PCR_MUX(0b001);
    IP_PORTD -> PCR[16] |= PORT_PCR_MUX(0b001);

    IP_PTD -> PDDR |= 1<<0; // Cau hinh GPIO data output
    IP_PTD -> PDDR |= 1<<15;
    IP_PTD -> PDDR |= 1<<16;
    IP_PTD -> PDOR |= 1<<0; //Cau hinh muc dien ap cho chan (0 la ON, 1 la OFF)
    IP_PTD -> PDOR |= 1<<16;
    IP_PTD -> PDOR |= 1<<15;

    while(1) {
    	blinkLed(IP_PTD, 0, 300000);
    	blinkLed(IP_PTD, 15, 300000);
    	blinkLed(IP_PTD, 16, 300000);
    }

}

