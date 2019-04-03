#include "Grove_GSR_Skin_Current_Arduino_UNO.h"

#ifdef TINYLINK_SKIN_CURRENT
	#if TINYLINK_SKIN_CURRENT == GROVE_GSR

		Grove_GSR_Skin_Current_Arduino_UNO::Grove_GSR_Skin_Current_Arduino_UNO(): Sensor(0) {	
		}

		int Grove_GSR_Skin_Current_Arduino_UNO::_read(){
			_data = analogRead(SKIN_CURRENT_ANALOG);
			return 0;
		}

		Grove_GSR_Skin_Current_Arduino_UNO TL_Skin_Current;

	#endif
#endif