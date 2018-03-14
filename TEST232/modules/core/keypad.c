#include "keypad.h"
#include <ncurses.h>


void keyboard_module()

{
     
for
    (;;)
    
    {

if
    ((choice = getch()) == ERR)
    
    {
     
    // nothing on keyboard .
     
    }
          
else
    
    {
              
    // something is pressed .

    }

    }


}

void choice_module()

{

char choice;

while (1)

    {
        
    printf("please enter [y]es, [n]o or [m]aybe: ");
    scanf(" %c", &choice);
    fflush(stdin);

if
    (choice == 'y' || choice == 'n' || choice == 'm')
    
    {

break;
    
    }

else

    {
        
    printf("Please enter only \'y\', \'n\' or \'m\'!\n");
    
    }

}

if
    (choice == 'y')
    
    {

    printf("you selected yes!\n");

    }

}