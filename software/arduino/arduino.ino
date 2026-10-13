#include <Wire.h>
#include "multiplexer.h"
#include "temperature.h" // stuff regarding convert to temp
#include "i2c.h" // stuff regarding data to i2c
//#include "conditionSignal.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // need to figure out what baud rate to choose
  delay(1000); // for some reason if this is not here, it messes up
  setupMult();
  setupI2C(); //incomplete

  delay(10000); //to be able to see messages, delay 10s
}

void loop() {
  // put your main code here, to run repeatedly:
  // 1. loop 8 times, store 8 values from temp sensors into temperature array
  // 2. get highest from those 8 values
  for (int i = 0; i < 8; i++) {
    selectMult(i);
    temperatureArray[i] = readMult();
  }
  valueToSend = convertFloatTemp(findHighestTemp(temperatureArray, tempArraySize));
  // send value by i2c
  // also have to blink LED if at or over 60 C for highest temp
}
