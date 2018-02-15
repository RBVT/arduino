#!/bin/bash

# линковка
# компиляции
# сборка
# выход

#

setterm -cursor off                          # выключаем мерцание курсора .

clear

#

tput cup 0 2                                # положение курсора .
tput rev                                    # включение интерсии цветов .
echo " BUILD "

tput cup 0 11
tput rev        
echo " LINK "

tput cup 0 19
tput rev       
echo " COMPILE "

tput cup 0 30
tput rev        
echo " EXIT "
tput sgr0

#

tput setaf 3                                # ANSCI .
tput cup 1 2
tput rev
echo "         Press any key to         "
tput sgr0

tput cup 0 29

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"

tput clear

#

echo 

gcc -Wall -fPIC -c errors.c
gcc -shared -o errors.so errors.o


echo   - OK linking errors.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c config.c
gcc -shared -o config.so config.o

echo    - OK linking config.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c windows.c
gcc -shared -o windows.so windows.o


echo    - OK linking windows.c
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

setterm -cursor on

tput setaf 3                                # ANSCI .
echo "Press any key to exit ..."

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"

tput clear



