#!/bin/bash
gcc -Wall -Pendantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *o
ranlib liball.a
