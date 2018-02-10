#include <ncurses.h>
#include <stdlib.h>

int main()

{
	initscr();
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
