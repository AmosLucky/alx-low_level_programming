#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
anlib liball.a
