#include "error.h"
#include <stdlib.h>
#include <ncurses.h>

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

	printw("OK: ncurses initialised. \n");	

	}
	
	endwin();

}
