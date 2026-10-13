// header guard
#pragma once
#include <Arduino.h>

const int tempArraySize = 8;

// Prototypes
int findHighestTemp(int tempValues[], int size);
float convertFloatTemp(int rawHighestData);


inline int temperatureArray[8]; 