/*
 * chSwitch.cpp
 *
 * Volume input and processing
 */

/* Header including */
#include "chSwitch.h"


/* Global variables */
bool bt_past_p1 = false;
bool bt_past_p2 = false;
bool bt_past_pp1 = false;
bool bt_past_pp2 = false;
bool bt_past_m1 = false;
bool bt_past_m2 = false;
bool bt_past_mm1 = false;
bool bt_past_mm2 = false;


/* Function: Buttons state read */
int chBtRead() {
  // Button_P
  if((bt_past_p2 == false) && (bt_past_p1 == true) && digitalRead(PIN_SW_CHP)) { chSwP(); }
  bt_past_p2 = bt_past_p1;
  bt_past_p1 = digitalRead(PIN_SW_CHP);

  // Button_PP
  if((bt_past_pp2 == false) && (bt_past_pp1 == true) && digitalRead(PIN_SW_CHPP)) { chSwPP(); }
  bt_past_pp2 = bt_past_pp1;
  bt_past_pp1 = digitalRead(PIN_SW_CHPP);

  // Button_M
  if((bt_past_m2 == false) && (bt_past_m1 == true) && digitalRead(PIN_SW_CHM)) { chSwM(); }
  bt_past_m2 = bt_past_m1;
  bt_past_m1 = digitalRead(PIN_SW_CHM);

  // Button_MM
  if((bt_past_mm2 == false) && (bt_past_mm1 == true) && digitalRead(PIN_SW_CHMM)) { chSwMM(); }
  bt_past_mm2 = bt_past_mm1;
  bt_past_mm1 = digitalRead(PIN_SW_CHMM);

  return 0;
}


/* Function: Current channel switch */
void chSwP() {
  ch_current += 1;
  if(DMX_CHMAX <= ch_current) { ch_current -= DMX_CHMAX; }
  return;
}
void chSwPP() {
  ch_current += 10;
  if(DMX_CHMAX <= ch_current) { ch_current -= DMX_CHMAX; }
  return;
}
void chSwM() {
  ch_current -= 1;
  if(ch_current < 0) { ch_current += DMX_CHMAX; }
  return;
}
void chSwMM() {
  ch_current -= 10;
  if(ch_current < 0) { ch_current += DMX_CHMAX; }
  return;
}
