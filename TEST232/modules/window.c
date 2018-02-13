#include <ncurses.h>
#include "window.h"


int get_size_of_win(int max_x, int max_y);


void about_win(int max_x, int max_y)

{

	initscr();
	curs_set(0);
    
	WINDOW *window_main;
   
	window_main = newwin( 40, 40, 0, 0 );
	box(window_main, 0, 0);

	refresh();
	wrefresh(window_main);
        

	getch();

	delwin(window_main);
	endwin();
 
}




void login_win(int max_x, int max_y)

{

	getch();

	delwin(login_win);
	endwin();

}




void main_win(int max_x, int max_y)

{

	getch();

	delwin(main_win);
	endwin();

}




void exit_win(int max_x, int max_y)

{

	getch();

	delwin(exit_win);
	endwin();

}




int get_size_of_win(int max_x, int max_y)

{

        initscr();
        getmaxyx(stdscr, max_x, max_y);
        endwin();

}

