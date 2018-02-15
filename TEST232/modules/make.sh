#!/bin/bash

clear

gcc -Wall -fPIC -c errors.c
gcc -shared -o errors.so errors.o

sleep 1

gcc -Wall -fPIC -c config.c
gcc -shared -o config.so config.o

sleep 1

gcc -Wall -fPIC -c windows.c
gcc -shared -o windows.so windows.o

sleep 1

gcc -Wall -fPIC -c graphics.c
gcc -shared -o graphics.so graphics.o

sleep 1

gcc main.c -o main.out -lcurses

echo 

echo ~ ./make.sh скомпилированы следующие файлы:

echo

ls *.{so,o}

echo


