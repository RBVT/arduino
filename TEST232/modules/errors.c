#include "errors.h"
#include <ncurses.h>


int status;


void check_what_status()

{

	printf("%d ", status);

}

void error_is_true()

{

	printf("E0F : %d \n", status);

}



void error_is_false()

{

printf("OK : %d \n", status);

}



void output_what_status()

{

fputs("curses initialised. ", stdin);

}


void check_what_window()

{

if
	(!initscr())

	{

//  	EOF

	status = FALSE;
	error_is_false();	

	}

else

	{

//		OK

	status = TRUE;
	error_is_true();	

	}

}