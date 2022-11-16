/*
*  file name: test_analog.cpp
*  Created by Mike Stepanik on Novemeber  14, 2022.
* 
*  Testing the of the AnalogIn class
*/

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "AnalogIn.h"

using namespace std;

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"


int main(){
	cout << "Starting test_ananlog.cpp" << endl;
	cout << endl;
	AnalogIn temp_sensor(0);
	unsigned int number;
	number=temp_sensor.getNumber();
	int adc_value;
	adc_value=temp_sensor.readAdcSample();

	
	cout << "Reading AIN" << number << "..." << endl;
	cout << "The value of the ADC is: " << adc_value << endl;
	cout << endl;

	return 0;
}



