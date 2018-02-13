#!/bin/bash

clear

echo makefile этот скрипт компилирует файлы ".h" и ".c"
echo v.0.1

gcc -Wall -fPIC -c settings.c
gcc -shared -o settings.so settings.o
gcc -Wall -fPIC -c window.c
gcc -shared -o window.so window.o
gcc main.c -o main.out -lcurses
