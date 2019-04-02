
#include <Arduino.h>
#include "TL_Libraries.h"

void setup() {
  // put your setup code here, to run once:
  TL_Temperature.read();
  TL_Serial.println(TL_Temperature.data());
}

void loop() {

  // put your main code here, to run repeatedly:
}