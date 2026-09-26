#include <xc.h>
#include "mcc_generated_files/system/pins.h"
#include "hc164.h"

void hc164_init(void) {
    AB_SetLow();      // Línea de datos a 0.
    CLK_SetLow();     // Reloj a 0.
    MR_SetHigh();     // Reset siempre en 1.
    AB_SetDigitalOutput();
    CLK_SetDigitalOutput();
    MR_SetDigitalOutput();
}

void hc164_shift_out_25bits(uint32_t dataBits) {
    for(int8_t bit=0; bit<25; bit++) {
        if (dataBits & (1UL << bit)) {
            AB_SetHigh();
        } else {
            AB_SetLow();
        }

        __asm("nop"); // Pequeña espera
        CLK_SetHigh();
        __asm("nop"); // Puede ajustarse la espera si se requiere
        CLK_SetLow();
    }
}
