/*
 * File:   main.c
 * Author: Ing. Kenny Aguilar Valera
 *
 * Created on 24 de abril de 2021, 12:59
 * Un "Hola mundo", solo encenderemos un LED por el pin GPI0 para ello debemos
 * configurar el pic12 para que dicho puerto sea Digital.
 */


#include "Configuracion/configuracion.h"

void main(void) {
    pinConfig();
    while(1)
    {
        //encendemos el led por el pin GPIO0
        GPIO = 0b00000001;
    }
    return;
}
