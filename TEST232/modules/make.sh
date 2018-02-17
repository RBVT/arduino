#!/bin/bash

#

#########################################################################
#-----------------------------------------------------------------------#
#-   _                     ./test.sh v0.1            _           _     -#
#-  | |                                             (_)         | |    -#
#-  | |   __ _   ____  _   _     ___    ___   _ __   _   _ __   | |_   -#
#-  | |  / _` | |_  / | | | |   / __|  / __| | '__| | | | '_ \  | __|  -#
#-  | | | (_| |  / /  | |_| |   \__ \ | (__  | |    | | | |_) | | |_   -#
#-  |_|  \__,_| /___|  \__, |   |___/  \___| |_|    |_| | .__/   \__|  -#
#-                      __/ |                           | |            -#
#-                     |___/                            |_|            -#
#-                                                                     -#
#-----------------------------------------------------------------------#
#########################################################################

#

# линковка
# компиляции
# сборка
# выход

#

setterm -cursor off                          # выключаем курсор .

clear

#

tput cup 0 2                                # положение курсора .
tput rev                                    # включение интерсии цветов .
echo " BUILD "
tput sgr0

tput cup 0 9
tput setaf 3
echo "-"
tput sgr0

tput cup 0 10
tput rev        
echo " LINK "
tput sgr0

tput cup 0 16
tput setaf 3
echo "-"
tput sgr0

tput cup 0 17 
tput rev      
echo " COMPILE "
tput sgr0

tput cup 0 26
tput setaf 3
echo "-"
tput sgr0

tput cup 0 27
tput rev        
echo " EXIT "
tput sgr0

#

tput cup 1 6
tput setaf 3                                # ANSCI .
echo " Press any key to start "
tput sgr0

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"

#

echo 

gcc -Wall -fPIC -c errors.c
gcc -shared -o errors.so errors.o


echo   - OK linking errors.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c tools.c
gcc -shared -o tools.so tools.o

echo   - OK linking tools.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c config.c
gcc -shared -o config.so config.o

echo    - OK linking config.c
echo 

sleep 0.1

#

# gcc -Wall -fPIC -c windows.c
# gcc -shared -o windows.so windows.o


# echo    - OK linking windows.c
# echo

# sleep 0.1

#

gcc -Wall -fPIC -c keypad.c
gcc -shared -o keypad.so keypad.o

echo   - OK linking keypad.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c graphics.c
gcc -shared -o graphics.so graphics.o


echo    - OK linking graphics.c
echo 

sleep 0.1

#

gcc main.c -o main.out -lcurses


echo    - OK building main.c

echo  

echo 

echo ~ ./make.sh скомпилированы следующие файлы:

echo

ls *.{so,o}

echo

tput setaf 3                                # ANSCI .
echo "Press any key to exit ..."

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"

setterm -cursor on                          # включение курсора .

tput clear



