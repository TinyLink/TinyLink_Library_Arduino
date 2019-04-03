#ifndef TL_LIBRARIES_H
#define TL_LIBRARIES_H

// #include "TL_Config.h"
#include "TL_Device_ID.h"

// System library		--------------------------------------------------------------------
#ifdef TINYLINK_SERIAL
	#if TINYLINK_SERIAL == ARDUINO_SERIAL
		#include "TL_SERIAL/ARDUINO_SERIAL/Arduino_Serial_Serial_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_TIME
	#if TINYLINK_TIME == ARDUINO_TIME
		#include "TL_TIME/ARDUINO_TIME/Arduino_Time_Time_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_TIMER
	#if TINYLINK_TIMER == ARDUINO_TIMER
		#include "TL_TIMER/ARDUINO_TIMER/Arduino_Timer_Timer_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_STORAGE
	#if TINYLINK_STORAGE == SD_SHIELD
		#include "TL_STORAGE/SD_SHIELD/SD_Shield_Storage_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_FILE
	#if TINYLINK_FILE == ARDUINO_FILE
		#include "TL_FILE/ARDUINO_FILE/Arduino_File_File_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_JSON
	#if TINYLINK_JSON == ARDUINO_JSON
		#include "TL_JSON/ARDUINO_JSON/TL_JSON.h"
	#endif
#endif

// Communication library	--------------------------------------------------------------------
#ifdef TINYLINK_BLUETOOTH
	#if TINYLINK_BLUETOOTH == DUAL_BLE
		#include "TL_BLUETOOTH/DUAL_BLE/Dual_Ble_Bluetooth_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_WIFI
	#if TINYLINK_WIFI == ESP8266
		#include "TL_WIFI/ESP8266/ESP8266_WiFi_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_MQTT
	#if TINYLINK_MQTT == ARDUINO_MQTT
		#include "TL_MQTT/ARDUINO_MQTT/Arduino_MQTT_MQTT_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_HTTP
	#if TINYLINK_HTTP == ARDUINO_HTTP
		#include "TL_HTTP/ARDUINO_HTTP/Arduino_HTTP_HTTP_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_LORA
	#if TINYLINK_LORA == LORA_SHIELD
		#include "TL_LORA/LORA_SHIELD/LORA_Shield_LORA_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_GPRS
	// not available
#endif

// Sensing library		--------------------------------------------------------------------
#ifdef TINYLINK_HUMIDITY
	#if TINYLINK_HUMIDITY == DHT11
		#include "TL_HUMIDITY/DHT11/DHT11_Humidity_Arduino_UNO.h"
	#elif TINYLINK_HUMIDITY == DHT22
		#include "TL_HUMIDITY/DHT22/DHT22_Humidity_Arduino_UNO.h"
	#elif TINYLINK_HUMIDITY == TH02
		#include "TL_HUMIDITY/TH02/TH02_Humidity_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_TEMPERATURE
	#if TINYLINK_TEMPERATURE == DHT11
		#include "TL_TEMPERATURE/DHT11/DHT11_Temperature_Arduino_UNO.h"
	#elif TINYLINK_TEMPERATURE == DHT22
		#include "TL_TEMPERATURE/DHT22/DHT22_Temperature_Arduino_UNO.h"
	#elif TINYLINK_TEMPERATURE == GROVE_TEMPERATURE
		#include "TL_TEMPERATURE/GROVE_TEMPERATURE/Grove_Temperature_Temperature_Arduino_UNO.h"
	#elif TINYLINK_TEMPERATURE == TH02
		#include "TL_TEMPERATURE/TH02/TH02_Temperature_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_PM25
	#if TINYLINK_PM25 == SDS018
		#include "TL_PM25/SDS018/SDS018_PM25_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_HCHO
	#if TINYLINK_HCHO == GROVE_HCHO
		#include "TL_HCHO/GROVE_HCHO/Grove_HCHO_HCHO_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_LIGHT
	#if TINYLINK_LIGHT == GROVE_LIGHT
		#include "TL_LIGHT/GROVE_LIGHT/Grove_Light_Light_Arduino_UNO.h"
	#elif TINYLINK_LIGHT == GROVE_DIGITAL_LIGHT
		#include "TL_LIGHT/GROVE_DIGITAL_LIGHT/Grove_Digital_Light_Light_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_SOIL_HUMIDITY
	#if TINYLINK_SOIL_HUMIDITY == SOIL_MOISTURE_ANALOG
		#include "TL_SOIL_HUMIDITY/SOIL_MOISTURE_ANALOG/Soil_Moisture_Analog_Soil_Humidity_Arduino_UNO.h"
	#elif TINYLINK_SOIL_HUMIDITY == GROVE_MOISTURE
		#include "TL_SOIL_HUMIDITY/GROVE_MOISTURE/Grove_Moisture_Soil_Humidity_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_SOUND
	// not available
#endif

#ifdef TINYLINK_ACCELEROMETER
	#if TINYLINK_ACCELEROMETER == GROVE_IMU9
		#include "TL_ACCELEROMETER/GROVE_IMU9/Grove_IMU9_Accelerometer_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_MAGNET
	#if TINYLINK_MAGNET == GROVE_IMU9
		#include "TL_MAGNET/GROVE_IMU9/Grove_IMU9_Magnet_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_GYRO
	#if TINYLINK_GYRO == GROVE_IMU9
		#include "TL_GYRO/GROVE_IMU9/Grove_IMU9_Gyro_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_GPS
	#if TINYLINK_GPS == U_BLOX
  		#include "TL_GPS/U_BLOX/U_BLOX_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_HEART_RATE
	#if TINYLINK_HEART_RATE == GROVE_FINGER_CLIP_HEART_RATE
  		#include "TL_HEART_RATE/GROVE_FINGER_CLIP_HEART_RATE/Grove_Finger_Clip_Heart_Rate_Heart_Rate_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_SKIN_CURRENT
	#if TINYLINK_SKIN_CURRENT == GROVE_GSR
  		#include "TL_SKIN_CURRENT/GROVE_GSR/Grove_GSR_Skin_Current_Arduino_UNO.h"
	#endif
#endif

// Control library		--------------------------------------------------------------------
#ifdef TINYLINK_LED
	#if TINYLINK_LED == ARDUINO_LED
		#include "TL_LED/ARDUINO_LED/Arduino_LED_LED_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_RELAY
	#if TINYLINK_RELAY == GROVE_RELAY
		#include "TL_RELAY/GROVE_RELAY/Grove_Relay_Relay_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_MOTOR
	#if TINYLINK_MOTOR == GROVE_DC_MOTOR
		#include "TL_MOTOR/GROVE_DC_MOTOR/Grove_DC_Motor_Motor_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_DISPLAY
	#if TINYLINK_DISPLAY==GROVE_LCD_RGB
		#include "TL_DISPLAY/GROVE_LCD_RGB/Grove_LCD_RGB_Display_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_BULB
	#if TINYLINK_BULB == GROVE_CHAINABLE_RGB_BULB
		#include "TL_BULB/GROVE_CHAINABLE_RGB_BULB/Grove_Chainable_RGB_Bulb_Bulb_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_CAR
	#if TINYLINK_CAR == GROVE_CAR
		#include "TL_CAR/GROVE_CAR/Grove_Car_Car_Arduino_UNO.h"
	#endif
#endif

#endif
