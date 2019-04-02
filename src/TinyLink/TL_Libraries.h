#ifndef TL_LIBRARIES_H
#define TL_LIBRARIES_H

// #include "TL_Config.h"
#include "TL_Device_ID.h"

// System library		--------------------------------------------------------------------
#ifdef TINYLINK_SERIAL
	#if TINYLINK_SERIAL == ARDUINO_SERIAL
		#include "ARDUINO_SERIAL/Arduino_Serial_Serial_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_TIME
	#if TINYLINK_TIME == ARDUINO_TIME
		#include "ARDUINO_TIME/Arduino_Time_Time_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_TIMER
	#if TINYLINK_TIMER == ARDUINO_TIMER
		#include "ARDUINO_TIMER/Arduino_Timer_Timer_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_STORAGE
	#if TINYLINK_STORAGE == SD_SHIELD
		#include "SD_SHIELD/SD_Shield_Storage_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_FILE
	#if TINYLINK_FILE == ARDUINO_FILE
		#include "ARDUINO_FILE/Arduino_File_File_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_JSON
	#if TINYLINK_JSON == ARDUINO_JSON
		#include "ARDUINO_JSON/TL_JSON.h"
	#endif
#endif

// Communication library	--------------------------------------------------------------------
#ifdef TINYLINK_BLUETOOTH
	#if TINYLINK_BLUETOOTH == DUAL_BLE
		#include "DUAL_BLE/Dual_Ble_Bluetooth_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_WIFI
	#if TINYLINK_WIFI == ESP8266
		#include "ESP8266/ESP8266_WiFi_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_MQTT
	#if TINYLINK_MQTT == ARDUINO_MQTT
		#include "ARDUINO_MQTT/Arduino_MQTT_MQTT_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_HTTP
	#if TINYLINK_HTTP == ARDUINO_HTTP
		#include "ARDUINO_HTTP/Arduino_HTTP_HTTP_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_LORA
	#if TINYLINK_LORA == LORA_SHIELD
		#include "LORA_SHIELD/LORA_Shield_LORA_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_GPRS
	// not available
#endif

// Sensing library		--------------------------------------------------------------------
#ifdef TINYLINK_HUMIDITY
	#if TINYLINK_HUMIDITY == DHT11
		#include "DHT11/DHT11_Humidity_Arduino_UNO.h"
	#elif TINYLINK_HUMIDITY == DHT22
		#include "DHT22/DHT22_Humidity_Arduino_UNO.h"
	#elif TINYLINK_HUMIDITY == TH02
		#include "TH02/TH02_Humidity_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_TEMPERATURE
	#if TINYLINK_TEMPERATURE == DHT11
		#include "DHT11/DHT11_Temperature_Arduino_UNO.h"
	#elif TINYLINK_TEMPERATURE == DHT22
		#include "DHT22/DHT22_Temperature_Arduino_UNO.h"
	#elif TINYLINK_TEMPERATURE == GROVE_TEMPERATURE
		#include "GROVE_TEMPERATURE/Grove_Temperature_Temperature_Arduino_UNO.h"
	#elif TINYLINK_TEMPERATURE == TH02
		#include "TH02/TH02_Temperature_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_PM25
	#if TINYLINK_PM25 == SDS018
		#include "SDS018/SDS018_PM25_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_HCHO
	#if TINYLINK_HCHO == GROVE_HCHO
		#include "GROVE_HCHO/Grove_HCHO_HCHO_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_LIGHT
	#if TINYLINK_LIGHT == GROVE_LIGHT
		#include "GROVE_LIGHT/Grove_Light_Light_Arduino_UNO.h"
	#elif TINYLINK_LIGHT == GROVE_DIGITAL_LIGHT
		#include "GROVE_DIGITAL_LIGHT/Grove_Digital_Light_Light_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_SOIL_HUMIDITY
	#if TINYLINK_SOIL_HUMIDITY == SOIL_MOISTURE_ANALOG
		#include "SOIL_MOISTURE_ANALOG/Soil_Moisture_Analog_Soil_Humidity_Arduino_UNO.h"
	#elif TINYLINK_SOIL_HUMIDITY == GROVE_MOISTURE
		#include "GROVE_MOISTURE/Grove_Moisture_Soil_Humidity_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_SOUND
	// not available
#endif

#ifdef TINYLINK_ACCELEROMETER
	#if TINYLINK_ACCELEROMETER == GROVE_IMU9
		#include "GROVE_IMU9/Grove_IMU9_Accelerometer_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_MAGNET
	#if TINYLINK_MAGNET == GROVE_IMU9
		#include "GROVE_IMU9/Grove_IMU9_Magnet_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_GYRO
	#if TINYLINK_GYRO == GROVE_IMU9
		#include "GROVE_IMU9/Grove_IMU9_Gyro_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_GPS
	#if TINYLINK_GPS == U_BLOX
  		#include "U_BLOX/U_BLOX_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_HEART_RATE
	#if TINYLINK_HEART_RATE == GROVE_FINGER_CLIP_HEART_RATE
  		#include "GROVE_FINGER_CLIP_HEART_RATE/Grove_Finger_Clip_Heart_Rate_Heart_Rate_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_SKIN_CURRENT
	#if TINYLINK_SKIN_CURRENT == GROVE_GSR
  		#include "GROVE_GSR/Grove_GSR_Skin_Current_Arduino_UNO.h"
	#endif
#endif

// Control library		--------------------------------------------------------------------
#ifdef TINYLINK_LED
	#if TINYLINK_LED == ARDUINO_LED
		#include "ARDUINO_LED/Arduino_LED_LED_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_RELAY
	#if TINYLINK_RELAY == GROVE_RELAY
		#include "GROVE_RELAY/Grove_Relay_Relay_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_MOTOR
	#if TINYLINK_MOTOR == GROVE_DC_MOTOR
		#include "GROVE_DC_MOTOR/Grove_DC_Motor_Motor_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_DISPLAY
	#if TINYLINK_DISPLAY==GROVE_LCD_RGB
		#include "GROVE_LCD_RGB/Grove_LCD_RGB_Display_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_BULB
	#if TINYLINK_BULB == GROVE_CHAINABLE_RGB_BULB
		#include "GROVE_CHAINABLE_RGB_BULB/Grove_Chainable_RGB_Bulb_Bulb_Arduino_UNO.h"
	#endif
#endif

#ifdef TINYLINK_CAR
	#if TINYLINK_CAR == GROVE_CAR
		#include "GROVE_CAR/Grove_Car_Car_Arduino_UNO.h"
	#endif
#endif

#endif
