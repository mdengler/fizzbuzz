#!/usr/bin/env python
"""
http://c2.com/cgi/wiki?FizzBuzzTest
"""

for i in range(1, 101):
    if i % 5 == 0 and i % 3 == 0:
        print "%i FizzBuzz" % i
    else:
        if i % 5 == 0:
            print "%i Buzz" % i
        elif i % 3 == 0:
            print "%i Fizz" % i
        else:
            print i
