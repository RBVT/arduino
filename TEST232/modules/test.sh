#!/bin/bash

clear

setterm -cursor off

gcc -Wall -fPIC -c graphics.c
gcc -shared -o graphics.so graphics.o
gcc main.c -o main.out -lcurses


echo


tput setaf 3                                # ANSCI .
echo "Press any key to exit ..."

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"


setterm -cursor on                          # включение курсора .

tput clear
