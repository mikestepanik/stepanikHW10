#!/bin/bash
echo "Building the test_analog.cpp program......"
g++ -Wall AnalogIn.cpp test_analog.cpp -o test_analog   
echo "Finished"
