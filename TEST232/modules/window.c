#include "window.h"
#include <ncurses.h>

WINDOW *window_main;
WINDOW *window_sub;

void main_win()

{

        window_main = newwin( 40, 40, 0, 0 );
        box(window_main, 0, 0);

        mvwprintw(window_main, 1, 1, "window_main");

        refresh();
        wrefresh(window_main);

        getch();
        werase(window_main);

}

void sub_win()

{

	window_sub = newwin( 18, 38, 1, 1);
        box(window_sub, 0, 0);

	mvwprintw(window_sub, 1, 1, "about_win");


	refresh();
        wrefresh(window_sub);

	getch();
        werase(window_sub);


}

void about_win()

{
        mvwprintw(window_sub, 1, 1, "about_win");


	refresh();
        wrefresh(window_sub);

	getch();
        werase(window_sub);


}




void login_win()

{

       
	mvwprintw(window_sub, 1, 1, "login_win");


	refresh();
        wrefresh(window_sub);

	getch();
        werase(window_sub);

}

/*


void main_win()

{

        WINDOW *window_main;
        WINDOW *window_sub;

        window_main = newwin( 20, 40, 0, 0 );
	window_sub = newwin( 18, 38, 1, 1);
        
        box(window_main, 0, 0);
        box(window_sub, 0, 0);

	mvwprintw(window_sub, 1, 1, "main_win");


	refresh();

	wrefresh(window_main);
        wrefresh(window_sub);

	getch();

	delwin(window_main);
        delwin(window_sub);

        endwin();
}


*/

void exit_win()

{

	mvwprintw(window_sub, 1, 1, "exit_win");


	refresh();

	wrefresh(window_main);
        wrefresh(window_sub);

	getch();

	delwin(window_main);
        delwin(window_sub);

        endwin();
        
}

