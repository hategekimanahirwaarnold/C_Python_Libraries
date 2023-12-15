#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -o libPython.so -fPIC -I/Library/Frameworks/Python.framework/Versions/3.11/include/python3.11 -L/Library/Frameworks/Python.framework/Versions/3.11/lib -lpython3.11 print_python_floats.c
