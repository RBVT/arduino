#include "settings.h"
#include <ncurses.h>


void get_size_of_win()

{
        int max_x, max_y;

        initscr();
        noecho();
        curs_set(0);
        getmaxyx(stdscr, max_x, max_y);
        printw("max_x = %d \n", max_x);
        printw("max_y = %d \n", max_y);
        getch();
        endwin();

        return;
}