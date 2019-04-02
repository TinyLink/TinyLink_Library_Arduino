#ifndef DHT_22_TEMPERATURE_ARDUINO_UNO_H
#define DHT_22_TEMPERATURE_ARDUINO_UNO_H

#include <Arduino.h>
#include "TL_Config.h"
#include "Sensor_template.h"
#include "arduino_dht.h"

#ifdef TINYLINK_TEMPERATURE
	#if TINYLINK_TEMPERATURE == DHT22

		class DHT22_Temperature_Arduino_UNO: public Sensor<double>{
		private:
			DHT_Lib& DHT22Temp;
			int _read();
		public:
			DHT22_Temperature_Arduino_UNO();
		};

		extern DHT22_Temperature_Arduino_UNO TL_Temperature;

		#endif

	#endif
#endif
