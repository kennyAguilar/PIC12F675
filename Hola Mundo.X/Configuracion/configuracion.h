/* 
 * File:   configuracion.h
 * Author: Kenny
 *
 * Created on 24 de abril de 2021, 12:59
 */

#ifndef CONFIGURACION_H
#define	CONFIGURACION_H

#ifdef	__cplusplus
extern "C" {
#endif

// 'C' source line config statements

// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-Up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = OFF      // GP3/MCLR pin function select (GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config CP = OFF         // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
//Definimos la frecuencia, recuerden que es Fosc/4    
#define _XTAL_FREQ 4000000
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

    // Configuramos el PIC12
    void pinConfig(void);

#ifdef	__cplusplus
}
#endif

#endif	/* CONFIGURACION_H */

