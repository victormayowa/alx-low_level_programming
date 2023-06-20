#!/bin/bash

echo "Please make me win!" > win.txt
gcc -shared -fPIC -o preload.so exploit.c
export LD_PRELOAD=./preload.so
