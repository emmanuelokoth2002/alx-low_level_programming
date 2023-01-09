#!/bin/bash
gcc -Wall -pedantic -Werrror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
