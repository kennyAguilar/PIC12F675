
#include <pic12f675.h>

#include "tmr0.h"

void tmr0Config(void)
{
    OPTION_REG = 0b01000111;
}
void tmr0Init(void)
{
    INTCON = 0x0;
    TMR0 = 61;
}
void tmr0delay(void)
{
    int i;
        for (i = 0; i < 20; i++) {
            while(INTCON == 0x00){
            
            }
            tmr0Init();

        }
}