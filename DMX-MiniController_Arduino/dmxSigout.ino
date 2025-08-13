/*
 * dmxSigout.cpp
 *
 * DMX signal output process
 */

/* Header including */
#include "dmxSigout.h"


/* Function: DMX signal output */
int dmxSigout()
{
  // Break & MAB
  pinMode(DMX_OUT, OUTPUT);
  digitalWrite(DMX_OUT, LOW);
  delayMicroseconds(88);
  digitalWrite(DMX_OUT, HIGH);
  delayMicroseconds(8);

  // Signal send
  Serial.begin(250000, SERIAL_8N2);
  //Serial.begin(250000);
  Serial.write(0x00);
  for(int i = 0; i < DMX_CHMAX; i++) {
    Serial.write(ch_values[i]);
  }
  Serial.end();

  // Quit
  return 0;
}
