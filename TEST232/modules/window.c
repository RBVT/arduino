#include "window.h"
#include <ncurses.h>

void about_win()

{

	initscr();
	curs_set(0);
    
	WINDOW *window_main;
   
	window_main = newwin( 40, 40, 0, 0 );
	box(window_main, 0, 0);

	mvwprintw(window_main, 1, 1, "about_win");

	refresh();
	wrefresh(window_main);

	getch();

	delwin(window_main);
	endwin();
 
}




void login_win()

{

        initscr();
        curs_set(0);

        WINDOW *window_main;

        window_main = newwin( 40, 40, 0, 0 );
        box(window_main, 0, 0);

	mvwprintw(window_main, 1, 1, "login_win");

        refresh();
        wrefresh(window_main);

        getch();

        delwin(window_main);
        endwin();

}




void main_win()

{

        initscr();
        curs_set(0);

        WINDOW *window_main;

        window_main = newwin( 40, 40, 0, 0 );
        box(window_main, 0, 0);

	mvwprintw(window_main, 1, 1, "main_win");

        refresh();
        wrefresh(window_main);

        getch();

        delwin(window_main);
        endwin();

}




void exit_win()

{

        initscr();
        curs_set(0);

        WINDOW *window_main;

        window_main = newwin( 40, 40, 0, 0 );
        box(window_main, 0, 0);

	mvwprintw(window_main, 1, 1, "exit_win");

        refresh();
        wrefresh(window_main);

        getch();

        delwin(window_main);
        endwin();

}
