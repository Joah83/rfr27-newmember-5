#include "multiplexer.h"

void setupMult() {
  // Setting up pinmodes
  pinMode(aPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  // pinMode(inhibitPin, OUTPUT);
  pinMode(comPin, INPUT);
  // enableMult();
  Serial.println(F("1. Multiplexer setup complete"));
}

/* Decided we do not need these as it will be constantly on anyway
void enableMult() {
  // code to enable multiplexer
  digitalWrite(inhibitPin, 0);
  enabled=true;
}

void disableMult() {
  // code that disables multiplexer
  digitalWrite(inhibitPin, 1);
  enabled=false;
}
*/

// selectedPin: 0-7 int, returns nothing
void selectMult(int selectedPin) {
  // 4s place check
  if (selectedPin & 4) {
    digitalWrite(aPin, 1);
  } else {
    digitalWrite(aPin, 0);
  }

  // 2s place check
  if (selectedPin & 2) {
    digitalWrite(bPin, 1);
  } else {
    digitalWrite(bPin, 0);
  }

  // 1s place check
  if (selectedPin & 1) {
    digitalWrite(cPin, 1);
  } else {
    digitalWrite(cPin, 0);
  }
}

// read the value of the multiplexer at the current pin if it is on
int readMult() {
  return analogRead(comPin);
}

