#include <pic12f675.h>


// Configuramos el PIC12
    void pinConfig(void)
    {
        // Limpiamos el puerto GPIO
        GPIO = 0x00;
        // Configurando para que el puerto GPIO sea un puerto digital
        CMCON = 0x07;
        ANSEL = 0x00;
        TRISIO = 0x00;
    }
