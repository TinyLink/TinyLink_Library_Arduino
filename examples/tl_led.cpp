/**********************************************************
# Add these additional configuration into platform.ini
lib_deps = 
  TinyLink_Library_Arduino

# all three sensors are on the development board, so it's 
# id is the board id
build_flags =
  -D TINYLINK_SERIAL=1002
  -D TINYLINK_TIME=1002
  -D TINYLINK_LED=1002
************************************************************/

#include "TL_Libraries.h"

void setup() {
  // put your setup code here, to run once:
  TL_Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  TL_LED.turnOn();
  TL_Serial.println("LED turn on");
  TL_Time.delayMillis(1000);
  TL_LED.turnOff();
  TL_Serial.println("LED turn off");
  TL_Time.delayMillis(1000);
}
