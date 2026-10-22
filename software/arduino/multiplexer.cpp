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

// selectedPin: 0-7 int, returns nothing
void selectMult(int selectedPin) {
  // 4s place check
  if (selectedPin & 4) {
    digitalWrite(cPin, 1);
  } else {
    digitalWrite(cPin, 0);
  }

  // 2s place check
  if (selectedPin & 2) {
    digitalWrite(bPin, 1);
  } else {
    digitalWrite(bPin, 0);
  }

  // 1s place check
  if (selectedPin & 1) {
    digitalWrite(aPin, 1);
  } else {
    digitalWrite(aPin, 0);
  }
}

// read the value of the multiplexer at the current pin if it is on
int readMult() {
  return analogRead(comPin);
}

