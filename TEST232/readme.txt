compile code by using the following gcc compiler command:

gcc filename.c -o filename.out
gcc filename.c -o filename.out -lcurses
gcc -Wall -fPIC -c filename.c 
gcc -shared -o filename.so filename.o

or use bash scripts included:

./make.sh       // for building app .
./rm.sh         // for deleting all compiled files (".o", ".so", ".out") .

on success compilation, the gcc compiler produces an executable file named: "filename.out" .
use "./filename.out" command to view the output of app .
