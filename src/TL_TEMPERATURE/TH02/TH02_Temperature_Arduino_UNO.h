#ifndef TH02_TEMPERATURE_ARDUINO_UNO_H
#define TH02_TEMPERATURE_ARDUINO_UNO_H

#include <Arduino.h>
#include "TL_Config.h"
#include "Sensor_template.h"
#include "arduino_th02.h"

#ifdef TINYLINK_TEMPERATURE
	#if TINYLINK_TEMPERATURE == TH02

		class TH02_Temperature_Arduino_UNO: public Sensor<double>{
		private:
			TH02_dev& TH02Temp;
			int _read();
		public:
			TH02_Temperature_Arduino_UNO();
		};

		extern TH02_Temperature_Arduino_UNO TL_Temperature;

		#endif

	#endif
#endif
