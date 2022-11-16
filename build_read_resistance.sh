#!/bin/bash
#Build file for the file read_resistance.cpp
echo "Building the read_resistance.cpp program......"
g++ -Wall AnalogIn.cpp read_resistance.cpp -o read_resisatnce   
echo "Finished"
