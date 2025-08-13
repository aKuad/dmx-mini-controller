#ifndef VOLUMECTRL_H
#define VOLUMECTRL_H

/*
 * volumeCtrl.h
 *
 * Volume input and processing
 */

/* Headders including */
#include "generalDef.h"


/* Global variables extern */
extern int ch_current;
extern uint8_t ch_values[DMX_CHMAX];
extern uint8_t vl_value;


/* Functions prototype declaration */
int volumeRead();
void valueWrite();


#endif /* VOLUMECTRL_H */
