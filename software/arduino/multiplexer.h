// header guard
#pragma once
#include <Arduino.h>

// Various pins for multiplexer -- incomplete
const int s0 =
const int s1 =
const int s2 =
const int s3 =
const int enableMultiplexerPin =
const int readMultiplexerPin =

// Prototypes
void setupMult();
void enableMult();
void disableMult();
void selectMult(int selectedPin);
int readMult();

inline bool enabled = false; 