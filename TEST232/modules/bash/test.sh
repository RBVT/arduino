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

chmod +x test.sh

clear

setterm -cursor off

#

cd ..                                                                        # переход в корневую папку проекта .
cd core/                                                                     # переход в папку " core/ "

mv ~/Desktop/modules/lib/*.h ~/Desktop/modules/core/                         # перемещаем файлы формата ".h" .

#

gcc -Wall -fPIC -c settings.c
gcc -shared -o settings.so settings.o

echo   - OK linking settings.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c tools.c
gcc -shared -o tools.so tools.o

echo   - OK linking open.c
echo 

sleep 0.1

#

gcc -Wall -fPIC -c open.c
gcc -shared -o open.so open.o

echo   - OK linking open.c
echo 

sleep 0.1

#


gcc -Wall -fPIC -c help.c
gcc -shared -o help.so about.o

echo   - OK linking help.c
echo 

sleep 0.1

#

gcc core.c -o core.out

echo   - OK compiling core.c
echo 

sleep 0.1

echo   - OK DONE!
echo 

sleep 0.1

#

mv ~/Desktop/modules/core/*.h ~/Desktop/modules/lib/                         # перемещаем обратно файлы формата ".h" .
mv ~/Desktop/modules/core/*.out ~/Desktop/modules/                           # перемещаем обратно файлы формата ".out" .

#


echo


tput setaf 5                                # ANSCI .
echo "- OK Press any key to exit ..."

stty -echo raw
c=$(dd bs=1 count=1 2>/dev/null )
stty echo -raw
echo "$c"

tput sgr0


setterm -cursor on                          # включение курсора .

tput clear

find . -name "*.o" -type f|xargs rm -f                                     # удаляем собранное приложение .
find . -name "*.so" -type f|xargs rm -f                                     # удаляем собранное приложение .

cd ..
./core.out

find . -name "*.out" -type f|xargs rm -f                                     # удаляем собранное приложение .

# END   