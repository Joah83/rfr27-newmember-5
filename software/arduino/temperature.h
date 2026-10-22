// header guard
#pragma once
#include <Arduino.h>
#include <cmath>

const int tempArraySize = 8;

// Prototypes
int findHighestTemp(int tempValues[], int size);
float convertFloatTemp(int rawLowestData);


inline int temperatureArray[tempArraySize]; 