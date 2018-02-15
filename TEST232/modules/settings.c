#include "settings.h"
#include <ncurses.h>

void open_scr()

{

        initscr();
        noecho();
        curs_set(0);
}

int get_size_of_max_xy()

{
        getmaxyx(stdscr, max_x, max_y);
        printw("max_x = %d \n", max_x);
        printw("max_y = %d \n", max_y);

        getch();

        return(max_x + max_y);

}



void close_scr()
{

        getch();
        endwin();

}

