#include "errors.h"
#include <ncurses.h>


#define TRUE 1
#define FALSE 0



int status;



void false_status()

{

	printf("E0F : %d \n", status);

}



void true_status()

{

printf("OK : %d \n", status);

}



void output_status()

{

	printf("%d ", status);

}

void parsing_status()

{

fputs("curses initialised. ", stdin);

}


void parsing_win()

{

if
	(!initscr())

	{

//  	EOF

	status = FALSE;
	false_status();	

	}

else

	{

//		OK

	status = TRUE;
	true_status();	

	}

}
