#include "keypad.h"
#include <ncurses.h>


void keyboard_module()

{

int ch;
     
for
    (;;)
    
    {

if
    ((ch = getch()) == ERR)
    
    {
     
    // nothing on keyboard .
     
    }
          
else
    
    {
              
    // something is pressed .

    }

    }


}