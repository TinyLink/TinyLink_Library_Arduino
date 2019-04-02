#ifndef GROVE_FINGER_CLIP_HEART_RATE_HEART_RATE_ARDUINO_UNO_H
#define GROVE_FINGER_CLIP_HEART_RATE_HEART_RATE_ARDUINO_UNO_H

#include <Arduino.h>
#include "TL_Config.h"
#include "Sensor_template.h"
#include "Wire.h"

#ifdef TINYLINK_HEART_RATE
	#if TINYLINK_HEART_RATE == GROVE_FINGER_CLIP_HEART_RATE


		class Grove_Finger_Clip_Heart_Rate_Heart_Rate_Arduino_UNO: public Sensor<int>{
		protected:
			int _read();
		public:
			Grove_Finger_Clip_Heart_Rate_Heart_Rate_Arduino_UNO();
		};

		extern Grove_Finger_Clip_Heart_Rate_Heart_Rate_Arduino_UNO TL_Heart_Rate;

		#endif

	#endif
#endif
