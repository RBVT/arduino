#!/bin/bash

#

#######################################################################
#   _                     ./rm.sh v0.1              _           _     #
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
# компиляции
# сборка
# выход

#


clear

setterm -cursor off                          # выключение курсора .

echo 

echo ~ rm.sh скрипт удалит следующие файлы:

echo

ls *.{so,o}

echo 

#

rm errors.o
rm config.o
rm tools.o
rm windows.o
rm graphics.o

#

rm errors.so
rm config.so
rm tools.so
rm windows.so
rm graphics.so

#

rm main.out

#

sleep 0.1

#

echo  
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

