/* File name: read_resistance.cpp
 *
 * This program takes no arguments, and uses the AnanlogIn class.
 * This program completes 2 tasks...
 * 1.) Reads the ADC value on p9.39
 * 2.) Calculates the resistance in the connected circuit
 *
*/

#include <iostream>
#include "AnalogIn.h"

using namespace std;

#define MAX_ADC 4095
#define Vin 1.8f
#define R1 10000

int main(){
	AnalogIn AIN(0);
	int adc_value;
	adc_value=AIN.readAdcSample();
	float Vout;
	Vout = (Vin * adc_value)/MAX_ADC;
	float R;
	R = (Vout * R1)/(Vin-Vout);

	cout << endl;
	cout << "Using AIN" << AIN.getNumber() << " to read in analog voltage" << endl;
	cout << "Measuring resistance..." << endl;
	cout << "The value of the ADC sample was: " << adc_value << endl;
	cout << "The analog voltage read in was: " << Vout << " Volts" << endl;
	cout << endl;
	cout << "Resistance: " << R << " Ohms" << endl;
	cout << endl;


}

