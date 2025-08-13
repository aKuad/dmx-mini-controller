#ifndef LCDVIEW_H
#define LCDVIEW_H

/*
 * lcdView.h
 *
 * Info printer to LCD
 */

/* Headders including */
#include <LiquidCrystal.h>
#include "generalDef.h"


/* Objects construct */
extern LiquidCrystal lcd;


/* Global variables extern */
extern int ch_current;
extern uint8_t ch_values[DMX_CHMAX];
extern uint8_t vl_value;


/* Functions prototype declaration */
int lcdView();


#endif /* LCDVIEW_H */
