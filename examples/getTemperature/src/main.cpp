
#include <Arduino.h>
#include "TL_Libraries.h"

void setup() {
  // put your setup code here, to run once:
  TL_Serial.begin(9600);
  TL_Serial.println();
  TL_Light.read();

}

void loop() {
  // put your main code here, to run repeatedly:
}