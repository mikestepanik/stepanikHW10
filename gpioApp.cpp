/* File name: gpioApp.cpp
 *  
 * This application completes 5 different tasks that control GPIO pins on BeagleBoneBlack)
 * (using three different classes LED, GPIO, and AnalogIn)
 *
 * 1.) Turn on user LEDs number 1 and 3.
 * 2.) Flash user LED 2 three times.
 * 3.) Reads the connected temperature sensor, and displays its value.
 * 4.) Reads the connected  push button on P8.16
 * 5.) If the push button in item 4 was pushed, turns on the LED on P9.12
 *
 *  Example Invocation: debian@beaglebone:~$ ./gpioApp 
 * Written by Mike Stepanik, Nov 15, 2022.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "LED.h"
#include "GPIO.h"
#include "AnalogIn.h"

using namespace exploringBB;
using namespace std;


#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

#define GPIO_PATH "/sys/class/gpio/"

int main(){
	cout << endl;
	cout << "Starting the gpioApp" <<endl;

	LED leds[4] = { LED(0), LED(1), LED(2), LED(3)};
	GPIO inGPIO(46), outGPIO(60); //46=P8.16 //60=P9.12
	AnalogIn temp_sensor(0);
	
	cout<<endl;
	cout << "Turning on LEDs number 1 and 3" << endl;
	leds[1].turnOn();
	leds[3].turnOn();
	cout<< "Task 1 complete!" << endl;


	cout<<endl;
	cout<<"Flashing LED 2 three times" <<endl;
	for(int i=0; i<3; i++){
		leds[2].flash("50");
	}
	cout<<"Task 2 complete!" <<endl;

	cout<<endl;
	int adc_value;
	adc_value=temp_sensor.readAdcSample();
	cout << "The value of the Adc Sample was: " << adc_value << endl;
	cout<< "Task 3 complete!"<<endl;

	cout<<endl;
	GPIO_VALUE data;
	inGPIO.setDirection(INPUT);
	outGPIO.setDirection(OUTPUT);
	cout << "Task 4 complete!" << endl;
	cout << endl;
	data=inGPIO.getValue();
	if (data==HIGH){
		outGPIO.setValue(HIGH);
	}
	else{
		outGPIO.setValue(LOW);
	}
	cout<< "Task 5 complete!" << endl;


	return 0;
}//main
