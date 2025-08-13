/*
 * DMX-MiniController_Arduino.cpp
 *
 * DMX Mini Controller with Arduino
 */

/* Headers including */
#include <LiquidCrystal.h>
#include "generalDef.h"
#include "lcdView.h"
#include "volumeCtrl.h"
#include "chSwitch.h"
#include "dmxSigout.h"


/* Global variables */
LiquidCrystal lcd(PIN_LCD_RS, PIN_LCD_E, PIN_LCD_D4, PIN_LCD_D5, PIN_LCD_D6, PIN_LCD_D7);
int ch_current = 0;
uint8_t vl_value = 0;
uint8_t ch_values[DMX_CHMAX] = {};


/* Setup section */
void setup() {
  lcd.begin(16, 2);
  pinMode(PIN_SW_ENT, INPUT);
  pinMode(PIN_SW_CHP, INPUT);
  pinMode(PIN_SW_CHPP, INPUT);
  pinMode(PIN_SW_CHM, INPUT);
  pinMode(PIN_SW_CHMM, INPUT);
}


/* Loop section */
void loop() {
  chBtRead();
  volumeRead();
  if(digitalRead(PIN_SW_ENT)) { valueWrite(); }
  lcdView();
  dmxSigout();
}
