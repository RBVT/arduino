#include "prototypes.h"

void get_size_of_max_x()

{


if
        (!initscr())

        {        

        getmaxyx( stdscr, max_x, y );

        return;

        }
else
        {
        
        return;
        
        }

}

void get_size_of_max_y()

{


if
        (!initscr())

        {

        getmaxyx( stdscr, x, max_y );

        return;
        
        }
else
        {
        
        return;

        }

}


void output_settings()

{

printf("max_x = %d \n" , max_x);
printf("max_y = %d \n" , max_y);

}