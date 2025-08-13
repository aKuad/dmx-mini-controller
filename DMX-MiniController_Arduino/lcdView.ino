/*
 * lcdView.cpp
 *
 * Info printer to LCD
 */

/* Header including */
#include "lcdView.h"


/* Function: Info print to LCD */
int lcdView()
{
  // Text make
  char print1[17];
  char print2[17];
  sprintf(print1, "Ch:%3d | Val:%3d", ch_current + 1, ch_values[ch_current]);
  sprintf(print2, "Volume:%3d (%02X)", vl_value, vl_value);

  // LCD printing
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(print1);
  lcd.setCursor(0, 1);
  lcd.print(print2);

  // Quit
  return 0;
}
