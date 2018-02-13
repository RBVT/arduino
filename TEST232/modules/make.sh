#!/bin/bash

clear

echo 

echo make.sh скрипт компилирует следующие файлы:

echo

ls *.{so,o}

echo

gcc -Wall -fPIC -c error.c
gcc -shared -o error.so error.o
gcc -Wall -fPIC -c settings.c
gcc -shared -o settings.so settings.o
gcc -Wall -fPIC -c window.c
gcc -shared -o window.so window.o
gcc main.c -o main.out -lcurses
