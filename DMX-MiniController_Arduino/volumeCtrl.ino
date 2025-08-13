/*
 * volumeCtrl.h
 *
 * Volume input and processing
 */

/* Header including */
#include "volumeCtrl.h"


/* Function: Volume value read */
int volumeRead()
{
  vl_value = (int)(analogRead(PIN_VOLUME) / 4);
  return 0;
}


/* Function: Volume value write to ch_value */
void valueWrite()
{
  ch_values[ch_current] = vl_value;
  return;
}
