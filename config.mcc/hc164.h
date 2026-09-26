#ifndef HC164_H
#define HC164_H

#include <stdint.h>

// Inicializa los pines para el 74HC164 (debe llamarse solo una vez)
void hc164_init(void);

// Envía 25 bits consecutivos. Envía el LSB primero (bit 0), MSB al final (bit 24)
void hc164_shift_out_25bits(uint32_t dataBits);

#endif // HC164_H
