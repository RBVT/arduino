#!/bin/bash

#

#######################################################################
#   _                     ./test.sh v0.1            _           _     #
#  | |                                             (_)         | |    #
#  | |   __ _   ____  _   _     ___    ___   _ __   _   _ __   | |_   #
#  | |  / _` | |_  / | | | |   / __|  / __| | '__| | | | '_ \  | __|  #
#  | | | (_| |  / /  | |_| |   \__ \ | (__  | |    | | | |_) | | |_   #
#  |_|  \__,_| /___|  \__, |   |___/  \___| |_|    |_| | .__/   \__|  #
#                      __/ |                           | |            #
#                     |___/                            |_|            #
#                                                                     #
#######################################################################

#

# линковка
# компиляция
# сборка
# выход

#

clear

setterm -cursor off

gcc -Wall -fPIC -c graphics.c
gcc -shared -o graphics.so graphics.o

echo   - OK linking graphics.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c tools.c
gcc -shared -o tools.so tools.o

echo   - OK linking tools.c
echo 

sleep 0.1

#

gcc main.c -o main.out -lcurses

echo   - OK linking main.c
echo 

sleep 0.1

echo   - OK DONE!
echo 

sleep 0.1

#


echo


tput setaf 3                                # ANSCI .
echo "- OK Press any key to exit ..."

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"


setterm -cursor on                          # включение курсора .

tput clear
