#ifdef TINYLINK_HUMIDITY
	#if TINYLINK_HUMIDITY == DHT22

		#include "DHT22_Humidity_Arduino_UNO.h"

		DHT22_Humidity_Arduino_UNO::DHT22_Humidity_Arduino_UNO():Sensor(0.0), DHT22Humi(DHT_Lib::getSingleItem(HUMIDITY_DIGITAL_OUTPUT,DHT22_SENSOR)){
		}

		int DHT22_Humidity_Arduino_UNO::_read(){
			double chk = (double)DHT22Humi.readHumidity();
			if (!isnan(chk)){
				_data = chk;
				return 0;
			}
			return -1;
		}

		DHT22_Humidity_Arduino_UNO TL_Humidity;

	#endif
#endif
