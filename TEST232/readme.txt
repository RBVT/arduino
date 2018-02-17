compile, link code/files by using the following gcc compiler commands:

gcc filename.c -o filename.out            // for single ".c" modules .
gcc filename.c -o filename.out -lcurses   // for single ".c" modules .
gcc -Wall -fPIC -c filename.c             // for multiply ".c" and ".h" modules .
gcc -shared -o filename.so filename.o     // for multiply ".c" and ".h" modules .

or use bash scripts included:

./make.sh       // for building app (".out") .
./test.sh       // for testing modules ("h", "s") .
./rm.sh         // for deleting all compiled files (".o", ".so", ".out") .

on success compilation, the gcc compiler produces an executable file named: "filename.out" .
use "./filename.out" command to view the output of app .
