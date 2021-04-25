/*
 * File:   main.c
 * Author: Ing. Kenny Aguilar Valera
 *
 * Created on 25 de abril de 2021, 18:58
 * Blink Led por el pin GPIO0 usando el TMR0 como temporizador de 1 segundo
 */


#include "config.h"

void main(void) {
    pinConfig();
    tmr0Config();
    tmr0Init();
    
    while (1) {
        
        tmr0delay();
        GPIO = 0x01;
        tmr0delay();
        GPIO = 0x00;

    }

    return;
}
