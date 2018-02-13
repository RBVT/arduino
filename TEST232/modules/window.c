#include "window.h"
#include <ncurses.h>

void about_win()

{

	initscr();
	curs_set(0);
    
	WINDOW *window_main;
        WINDOW *window_sub;

	window_main = newwin( 20, 40, 0, 0 );
	window_sub = newwin( 18, 38, 1, 1);
        
        box(window_main, 0, 0);
        box(window_sub, 0, 0);

	mvwprintw(window_main, 1, 1, "about_win");


	refresh();

	wrefresh(window_main);
        wrefresh(window_sub);

	getch();

	delwin(window_main);
        delwin(window_sub);

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
