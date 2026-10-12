#include <Wire.h>
#include "multiplexer.h"
#include "temperature.h" // stuff regarding convert to temp
#include "i2c.h" // stuff regarding data to i2c
#include "conditionSignal.h" //stuff regarding conditioning signal

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000); // for some reason if this is not here, it messes up
  setupMult();

  delay(10000); //to be able to see messages, delay 10s
}

void loop() {
  // put your main code here, to run repeatedly:
}
