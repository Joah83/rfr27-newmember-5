#include "multiplexer.h"

void setupMult() {
  // Setting up pinmodes
  pinMode(aPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  pinMode(inhibitPin, OUTPUT);
  pinMode(comPin, INPUT);
  enableMult();
  Serial.println(F("1. Multiplexer setup complete"));
}

// i thought we needed to disable it and stuff first before switching
// but it takes nanoseconds while arduino is microseconds so doesnt matter
// just switch using select multiplexer while it is enabled ig
void enableMult() {
  // code to enable multiplexer

  enabled=true;
}

void disableMult() {
  // code that disables multiplexer

  enabled=false;
}

// selectedPin: 0-7 int, returns nothing
void selectMult(int selectedPin) {
  // code to return error if number is not within 0-7 inclusive
  // code to select a pin on multiplexer
  // basically digitalwrite binary to c, b, a pins
}

// read the value of the multiplexer at the current pin if it is on
int readMult() {
  // check if enabled
  // read
}

