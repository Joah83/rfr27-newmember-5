// header guard
#pragma once
#include <Arduino.h>

// Various pins for multiplexer -- incomplete
// aPin,bPin,cPin is for A, B, C selection
// inhibit is pin that disables multiplexer
// comPin is pin that gets signal from multiplexer
const int aPin =
const int bPin =
const int cPin =
const int inhibitPin =
const int comPin =

// Prototypes
void setupMult();
void enableMult();
void disableMult();
void selectMult(int selectedPin);
int readMult();

inline bool enabled = false; 