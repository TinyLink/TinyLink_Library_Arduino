/**********************************************************
lib_deps = 
  TinyLink_Library_Arduino

# TINYLINK_SERIAL and TINYLINK_TIME is on the development board
# TINYLINK_TEMPERATURE id is 3032, reprents DHT11
# TINYLINK_HUMIDITY id is 3032, reprents DHT11
# TEMPERATURE_DIGITAL_OUTPUT reprents the gpio pin number

build_flags =
  -D TINYLINK_SERIAL=1002
  -D TINYLINK_TIME=1002
  -D TINYLINK_TEMPERATURE=3032
  -D TEMPERATURE_DIGITAL_OUTPUT=2
  -D TINYLINK_HUMIDITY=3032
  -D HUMIDITY_DIGITAL_OUTPUT=2
************************************************************/

#include "TL_Libraries.h"

void setup() {
  // put your setup code here, to run once:
  TL_Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  TL_Temperature.read();
  TL_Humidity.read();
  TL_Serial.print("Temperature data is ");
  TL_Serial.println(TL_Temperature.data());
  TL_Serial.print("Humidity data is ");
  TL_Serial.println(TL_Humidity.data());
  TL_Time.delayMillis(5000);
}
