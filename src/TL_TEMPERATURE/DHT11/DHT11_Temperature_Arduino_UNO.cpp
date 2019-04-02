#include "DHT11_Temperature_Arduino_UNO.h"

#ifdef TINYLINK_TEMPERATURE
	#if TINYLINK_TEMPERATURE == DHT11

		DHT11_Temperature_Arduino_UNO::DHT11_Temperature_Arduino_UNO():Sensor(0.0), DHT11Temp(DHT_Lib::getSingleItem(TEMPERATURE_DIGITAL_OUTPUT,DHT11_SENSOR)){
		}

		int DHT11_Temperature_Arduino_UNO::_read(){
			double chk = (double)DHT11Temp.readTemperature();
			if (!isnan(chk)){
				_data = chk;
				return 0;
			}
			return -1;
		}

		DHT11_Temperature_Arduino_UNO TL_Temperature;

	#endif
#endif
