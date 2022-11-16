# File name: cube.py
#
# This script takes no arguments
#
# Computes the cube of odd numbers and prints the result
#
#   Example Invocation: debian@beaglebone:~$ python cube.py 
#
# Written by Mike Stepanik Nov 15, 2022

def cb(x):
    return x**3

print 
print 'Computing the cube of odd numbers...'
print 
for x in range(0, 19+1):
    if x % 2 == 0:
        print '{} Even and not Cubed'.format(x)
    else:
        print '{} Odd and Cubed {}'.format(x,cb(x))
print
