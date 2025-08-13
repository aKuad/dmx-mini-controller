#ifndef CHSWITCH_H
#define CHSWITCH_H

/*
 * chSwitch.h
 *
 * Channel switch control
 */

/* Headders including */
#include "generalDef.h"


/* Global variables extern */
extern int ch_current;
extern bool bt_past_p1;
extern bool bt_past_p2;
extern bool bt_past_pp1;
extern bool bt_past_pp2;
extern bool bt_past_m1;
extern bool bt_past_m2;
extern bool bt_past_mm1;
extern bool bt_past_mm2;


/* Functions prototype declaration */
int chBtRead();
void chSwP();
void chSwPP();
void chSwM();
void chSwMM();


#endif /* CHSWITCH_H */
