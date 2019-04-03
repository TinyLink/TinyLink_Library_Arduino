#ifndef GROVE_IMU9_MAGNET_ARDUINO_UNO_H
#define GROVE_IMU9_MAGNET_ARDUINO_UNO_H

#include <Arduino.h>
#include "TL_Config.h"
#include "Wire.h"
#include "MPU9250.h"
#include "I2Cdev.h"

#ifdef TINYLINK_MAGNET
	#if TINYLINK_MAGNET == GROVE_IMU9


		class Grove_9DOF_Magnet{
		private:
			MPU9250 magnet;
			int state;
			int status;
			I2Cdev I2C_M;
			int16_t mx, my, mz;
		public:
			Grove_9DOF_Magnet();
			int read();
			double data_x();
			double data_y();
			double data_z();
		};

		extern Grove_9DOF_Magnet TL_Magnet;

		#endif

	#endif
#endif
