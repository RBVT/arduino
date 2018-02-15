#include "error.h"
#include <stdlib.h>
#include <ncurses.h>

#define TRUE 1
#define FALSE 0

void false_status()

{

fprintf(stderr, "E0F : \n");

}



void true_status()

{

fprintf(stderr, "OK : \n");

}



void output_status()

{

	fputs("output_status \n", stdout);

}

void parsing_status()

{

fputs("curses initialised. ", stdin);

}


void parsing_win()

{

	initscr();
	noecho();
	curs_set(0);
	refresh();

if
	(!initscr())

	{
	
	false_status();
	parsing_status();
	exit(1);	

	}

else

	{

		output_status();
		parsing_status();	

	}
	
	endwin();

}
