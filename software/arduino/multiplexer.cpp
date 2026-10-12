#include <Arduino.h>
#include "multiplexer.h"

void setupMult() {
  // Setting up pinmodes
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(enableMultiplexerPin, INPUT);
  pinMode(readMultiplexerPin, INPUT);
  Serial.println(F("Multiplexer setup complete"));
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

// selectedPin: 0-15 int, returns nothing
void selectMult(int selectedPin) {
  // code to return error if number is not within 0-15 inclusive
  // code to select a pin on multiplexer
  // basically digitalwrite binary to s0, s1, s2, s3 pins
}

// read the value of the multiplexer at the current pin if it is on
int readMult() {
  // check if enabled
  // read
}

