/* 
 * File:   tmr0.h
 * Author: Kenny
 *
 * Created on 25 de abril de 2021, 18:59
 */

#ifndef TMR0_H
#define	TMR0_H

#ifdef	__cplusplus
extern "C" {
#endif

    void tmr0Config(void);
    void tmr0Start(void);
    void tmr0Init(void);
    void tmr0delay(void);


#ifdef	__cplusplus
}
#endif

#endif	/* TMR0_H */

