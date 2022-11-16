/*
* file name: LED.h
* Created by Mike Stepanik on Novemeber  14, 2022.
*  
* This class wraps the functionality of on-board LEDs on the BBB.
*
*/

#ifndef LED_H_
#define LED_H_
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"
class LED{
   private:
      string path;
      int number;
      virtual void writeLED(string filename, string value);
      virtual void removeTrigger();
   public:
      LED(int number);
      virtual void turnOn();
      virtual void turnOff();
      virtual void flash(string delayms);
      virtual void outputState();
      virtual ~LED();
};

#endif /* LED_H_ */
