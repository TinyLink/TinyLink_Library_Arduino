#ifndef GROVE_LCD_RGB_DISPLAY_ARDUINO_UNO_H
#define GROVE_LCD_RGB_DISPLAY_ARDUINO_UNO_H

#include "rgb_lcd.h"
#include "TL_Config.h"

#ifdef TINYLINK_DISPLAY
	#if TINYLINK_DISPLAY==GROVE_LCD_RGB

		class Grove_LCD_RGB_Display_Arduino_UNO{
		private:
			int init;
			static char stateSig[17];
			rgb_lcd lcd;
		public:
			Grove_LCD_RGB_Display_Arduino_UNO();
			void show(const char* data);
			void show(const String& data);
			void clear();
			const char* state();
		};

		extern Grove_LCD_RGB_Display_Arduino_UNO TL_Display;

		#endif

	#endif
#endif
