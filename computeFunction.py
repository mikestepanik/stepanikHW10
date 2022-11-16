# File name: computeFunction.py
#
# This script takes no arguments
#
# Computes the function f(x)=x^2+2 for x=0 to 9 
# and prints out the values for x and f(x).
# Example Invocation: debian@beaglebone:~$ python computeFunction.py 
# Written by Mike Stepanik Nov 15, 2022

print "f(x) = x^2 + 2 over the range 0 to 9"
print 
for x in range(0,9+1):
    f_x= x**2+2
    print "f(x)={} x={}".format(f_x, x) 
print 
