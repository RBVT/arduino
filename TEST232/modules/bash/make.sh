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

chmod +x make.sh                                                             # "chmod" для скрипта .

setterm -cursor off                                                          # выключаем видимость курсора .

clear                                                                        # очищаем окно терминала .

#
#

tput cup 0 0                                                                 # устанавливаем положение курсора .
tput setaf 3                                                                 # активируем цвет "ANSCI" .
echo "-"
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 2                                                                 # устанавливаем положение курсора .
tput rev                                                                     # включение интерсии цветов .
tput setaf 1                                                                 # активируем цвет "ANSCI" .
echo " BUILD "
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 9
tput setaf 3
echo "-"
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 10
tput rev
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo " LINK "
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 16
tput setaf 3
echo "-"
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 17 
tput rev  
tput setaf 4                                                                 # активируем цвет "ANSCI" .    
echo " COMPILE "
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 26
tput setaf 3
echo "-"
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 27
tput rev      
tput setaf 3                                                                 # активируем цвет "ANSCI" .  
echo " EXIT "
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

tput cup 0 33
tput setaf 3
echo "-"
tput sgr0

tput cup 0 34
tput rev      
tput setaf 6                                                                 # активируем цвет "ANSCI" .  
echo " RUN "
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

#
#

tput cup 2 0
echo "- `pwd`"

#

tput cup 4 0
tput setaf 3                                                                 # активируем цвет "ANSCI" .
echo "- Press any key to start .."
tput sgr0                                                                    # отключение атрибутов "ANSCI" .

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"

#

cd ..
cd core/

mv ~/Desktop/modules/lib/*.h ~/Desktop/modules/core/                         # перемещаем файлы формата ".h" .

#

echo 
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo   - OK linking cerrors.c                                                #  .
tput sgr0                                                                    # отключение атрибутов "ANSCI" .
echo 

gcc -Wall -fPIC -c cerrors.c
gcc -shared -o cerrors.so cerrors.o

sleep 0.1

#

echo 
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo   - OK linking gerrors.c                                                #  .
tput sgr0                                                                    # отключение атрибутов "ANSCI" .
echo 

gcc -Wall -fPIC -c gerrors.c
gcc -shared -o gerrors.so gerrors.o

sleep 0.1

#

echo 
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo   - OK linking tools.c                                                  #  .
tput sgr0                                                                    # отключение атрибутов "ANSCI" .
echo 

gcc -Wall -fPIC -c tools.c
gcc -shared -o tools.so tools.o

sleep 0.1

#

echo 
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo   - OK linking config.c                                                 #  .
tput sgr0                                                                    # отключение атрибутов "ANSCI" .
echo 

gcc -Wall -fPIC -c config.c
gcc -shared -o config.so config.o

sleep 0.1

#

# echo 
# tput setaf 5                                                               # активируем цвет "ANSCI" .
# echo    - OK linking windows.c                                             #  .
# tput sgr0                                                                  # отключение атрибутов "ANSCI" .
# echo

# gcc -Wall -fPIC -c windows.c
# gcc -shared -o windows.so windows.o

# sleep 0.1

#

echo 
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo   - OK linking keypad.c                                                 #  .
tput sgr0                                                                    # отключение атрибутов "ANSCI" .
echo 

gcc -Wall -fPIC -c keypad.c
gcc -shared -o keypad.so keypad.o

sleep 0.1

#

echo 
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo   - OK linking graphics.c                                               #  .
tput sgr0                                                                    # отключение атрибутов "ANSCI" .
echo 

gcc -Wall -fPIC -c graphics.c
gcc -shared -o graphics.so graphics.o


sleep 0.1

#

echo 
tput setaf 5                                                                 # активируем цвет "ANSCI" .
echo    - OK building main.c                                                 #  .
tput sgr0                                                                    # отключение атрибутов "ANSCI" .
echo 

gcc main.c -o main.out -lcurses                                              # собираем приложение .

echo  

echo 

tput setaf 4
echo - $0 скомпилированы следующие файлы:

echo 

echo -  *.{o,}                                                                # выводим созданные файлы формата ".o" .
echo -  *.{so,}                                                               # выводим созданные файлы формата ".so" .
tput sgr0                                                                     # отключение атрибутов "ANSCI" .


echo

tput setaf 3                                                                  # активируем цвет "ANSCI" .

echo - Press any key to exit and run:
echo - *.{out,}                                                               # выводим созданные файлы формата ".out" .

#
#

echo 

#

find . -name "*.so" -type f|xargs rm -f                                     # поиск и удаление файлов формата ".so" .
find . -name "*.o" -type f|xargs rm -f                                      # поиск и удаление файлов формата ".o" .

#

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"

tput sgr0                                                                    # отключение атрибутов "ANSCI" .


#

mv ~/Desktop/modules/core/*.h ~/Desktop/modules/lib/                         # перемещаем обратно файлы формата ".h" .
mv ~/Desktop/modules/core/main.out ~/Desktop/modules/                        # перемещаем обратно файлы формата ".h" .
cd ..

#

setterm -cursor on                                                           # включаем видимость курсора .

tput clear                                                                   # очищаем окно терминала .

./main.out                                                                   # запускаем "./main.out" .

#

find . -name "*.out" -type f|xargs rm -f                                     # удаляем собранное приложение .

#                                                                            # END .

