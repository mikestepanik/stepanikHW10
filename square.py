# File name: square.py
#
# This script takes no arguments
#
# Computes the square of the range 0 to 19
# and prints out the squares. 
#
# Example Invocation: debian@beaglebone:~$ python square.py
#
# Written by Mike Stepanik Nov 15, 2022

def sq(x):
    return x**2

print "Squares of the range 0 to 19"
for x in range (0, 19+1):
    print "{}^2={}".format(x, sq(x))


