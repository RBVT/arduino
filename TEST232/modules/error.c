#include "error.h"
#include <stdlib.h>
#include <ncurses.h>

#define TRUE 1
#define FALSE 0

void good_status()

{

}



void bad_status()

{


}



void output_status()

{

	fprintf(stderr, "OK: \f");
	fprintf(stdin, "ERR: \a");
	fprintf(stderr, "output_status \n");

}


void error_win()

{

	initscr();
	noecho();
	curs_set(0);
	refresh();

if
	(!initscr())

	{
	
	fprintf(stderr, "Error: initscr ncurses. \n");
	exit(1);	

	}

else

	{

		output_status();
		printw("curses initialised. \n");	

	}
	
	endwin();

}
