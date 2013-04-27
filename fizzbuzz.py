#!/usr/bin/env python
"""
http://c2.com/cgi/wiki?FizzBuzzTest
"""
import sys

for i in range(1, 101):
    if i % 3 == 0:
        sys.stdout.write("Fizz")
    if i % 5 == 0:
        sys.stdout.write("Buzz")
    if (i % 3 != 0) and (i % 5 != 0):
        sys.stdout.write(str(i))
    sys.stdout.write("\n")

