#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
EXPORT LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
#gcc -Wall -pedantic -Werror -Wextra -L . 0-main.c -l all -o len
