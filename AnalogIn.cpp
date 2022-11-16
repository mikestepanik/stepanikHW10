/*
* file name: AnalogIn.cpp
* Created by Mike Stepanik on Novemeber  14, 2022.
*
* Implementation of the AnalogIn class
*/


#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "AnalogIn.h"

using namespace std;

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"


//AnalogIn::AnalogIn(){}

AnalogIn::AnalogIn(unsigned int n){
	setNumber(n);
}

void AnalogIn::setNumber(unsigned int n){
	number=n;
}

int AnalogIn::readAdcSample(){
	ostringstream s;
	int adc_val =-1;
	s << ADC_PATH << number << "_raw";
	fstream fs;
	fs.open(s.str(), fstream::in);
	fs >> adc_val;
	fs.close();
	return adc_val;
}

AnalogIn::~AnalogIn(){
	//cout << "Destroying AnalogIn" << number << " Object" << endl;
}
