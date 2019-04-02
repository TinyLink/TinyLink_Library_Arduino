#ifndef DUAL_BLE_BLUETOOTH_ARDUINO_UNO_H
#define DUAL_BLE_BLUETOOTH_ARDUINO_UNO_H

#include <Arduino.h>
#include <SoftwareSerial.h>
#include "TL_Config.h"

#ifdef TINYLINK_BLUETOOTH
	#if TINYLINK_BLUETOOTH == DUAL_BLE

		class Dual_Ble_Bluetooth{
		protected:
			int sendBlueToothCommand(const char command[]);
			int recvMsg(unsigned int timeout, char* recv_str);
		public:
			Dual_Ble_Bluetooth(){}
			int init(const String& name);
			int init(const char* name);
			int send(const char* data);
			int send(const String& data);
			int recv(char* data);
			int recv(String& data);
		};

		extern Dual_Ble_Bluetooth TL_Bluetooth;

		#endif

	#endif
#endif
