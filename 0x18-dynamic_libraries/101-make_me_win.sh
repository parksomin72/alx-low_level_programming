#!/bin/bash

gcc -Wall -fPIC -shared -o inject.so -ldl -nostartfiles -D PIC inject.c
LD_PRELOAD=./inject.so
