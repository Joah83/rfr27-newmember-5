#include "temperature.h"

int lowestValue = 0;
float floatVolt = 0;
float floatTemp = 0;

int findHighestTemp(int tempValues[], int size) {
  // finds highest temperature, 0-1023
  lowestValue = 1023;
  for (int i = 0; i < size; i++) {
    if (tempValues[i] < lowestValue) {
      lowestValue = tempValues[i];
    }
  }
  return lowestValue;
}

float convertFloatTemp(int rawLowestData) {
  // converts from 0-1023 to float value and returns it
  // first converts 0-1023 to 0-5.0V (I lowkey dk what float mean but fuck it we ball)
  floatVolt = (rawLowestData * (5.0/1023.0));
  // second converts 0-5.0V to -40-120C
  floatTemp = (20.85651 + (26.83568 * log((2.5712 - floatVolt) / (floatVolt - 1.27176))));
  // third sends that shit back
  return floatTemp;
  //funny thing; coded all this at first assuming the higher the volts the hotter the shit is ;broken heart)
}