#!/bin/bash
wget -P .. https://github.com/danny-ell77/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD="$PWD/../libinjection.so"
