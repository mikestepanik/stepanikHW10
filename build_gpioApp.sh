#!/bin/bash
# build file for the file gpioApp.cpp also includes commands for configuring pins p9.12 and p8.16 
echo "Building the file gpioApp.cpp......"
config-pin p9.12 gpio
config-pin p8.16 gpio_pu
g++ -Wall LED.cpp GPIO.cpp AnalogIn.cpp  gpioApp.cpp -o gpioApp 
echo "Finished"
