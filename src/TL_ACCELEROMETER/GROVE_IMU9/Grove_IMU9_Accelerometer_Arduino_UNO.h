#ifndef GROVE_IMU9_ACCELEROMETER_ARDUINO_UNO_H
#define GROVE_IMU9_ACCELEROMETER_ARDUINO_UNO_H

#include <Arduino.h>
#include "TL_Config.h"
#include "Wire.h"
#include "MPU9250.h"
#include "I2Cdev.h"

#ifdef TINYLINK_ACCELEROMETER
	#if TINYLINK_ACCELEROMETER == GROVE_IMU9


		class Grove_IMU9_Accelerometer_Arduino_UNO{
		private:
			MPU9250 accelgyro;
			I2Cdev I2C_M;
			int status;
			int16_t ax, ay, az;
			int state;
		public:
			Grove_IMU9_Accelerometer_Arduino_UNO();
			int read();
			double data_x();
			double data_y();
			double data_z();
		};

		extern Grove_IMU9_Accelerometer_Arduino_UNO TL_Accelerometer;

		#endif

	#endif

#endif
