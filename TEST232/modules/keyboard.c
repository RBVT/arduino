#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>

#define TRUE 1
#define FALSE 0

int main(int choice)

{

	initscr();
	curs_set(0);	
	
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	noecho();	

while(TRUE)

	{
	
	choice = getch();			

if
	(choice == KEY_UP)
	
	{
	
	printf("KEY_UP \n");	
	
	}

else if
	(choice == KEY_DOWN)
	
	{
	
	printf("KEY_DOWN \n");	
	
	}

else if					
	(choice == KEY_RIGHT)
	
	{

	printw("KEY_RIGHT \n");

	}

else if
	(choice == KEY_LEFT)

	{

	printw("KEY_LEFT \n");

	}

else if
	(choice == 'q')

	{

	endwin();
	exit(0);

	}

else
	{
	
	attron(A_BOLD);
	printw("%c\n", choice);
	attroff(A_BOLD);
	sleep(1);
	clear();
	
	}

	}
}
