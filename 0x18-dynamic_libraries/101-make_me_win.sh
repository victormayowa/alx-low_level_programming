#!/bin/bash
wget -P .. https://raw.githubusercontent.com/victormayowa/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
