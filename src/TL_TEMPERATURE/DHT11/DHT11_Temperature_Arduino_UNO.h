#ifndef DHT_11_TEMPERATURE_ARDUINO_UNO_H
#define DHT_11_TEMPERATURE_ARDUINO_UNO_H

#include <Arduino.h>
#include "TL_Config.h"
#include "Sensor_template.h"
#include "arduino_dht.h"

#ifdef TINYLINK_TEMPERATURE
	#if TINYLINK_TEMPERATURE == DHT11

		class DHT11_Temperature_Arduino_UNO: public Sensor<double>{
		private:
			DHT_Lib& DHT11Temp;
			int _read();
		public:
			DHT11_Temperature_Arduino_UNO();
		};

		extern DHT11_Temperature_Arduino_UNO TL_Temperature;

		#endif

	#endif
#endif
