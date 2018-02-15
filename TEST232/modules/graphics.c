#include "graphics.h"           // абстракция ncurses .
#include <ncurses.h>            // графика ncurses .


WINDOW *window_main;
WINDOW *window_sub;

extern int max_x;
extern int max_y;

int get_size_of_max(int x, int y)

{

if
        (!initscr())

        {        

        getmaxyx(stdscr, x, y);

        max_x = x;
        max_y = y;

        printf("max_x = %d \n", max_x);
        printf("max_y = %d \n", max_y);

        return(max_x + max_y);

        }
else
        {
                return(1);
        }

}



void open_scr()               // инициализация графического режима .

{
        
        initscr();
        noecho();
        curs_set(0);
        
}





void close_scr()             // закрываем графику .

{

        refresh();
//        exit_win_main();
//        exit_win_sub();
        endwin();

}


int erase_win_main()            // очищаем окно main .

{

        werase(window_main);

        return 1;

}




int erase_win_sub()             // очищаем окно sub .

{

        werase(window_sub);

        return 1;

}




void refresh_win_main()         // обновляем окно main .

{

        refresh();
        wrefresh(window_main);

}




void refresh_win_sub()          // обновляем окно sub .

{

	refresh();
        wrefresh(window_sub);

}




void create_win_main()          // .

{

        window_main = newwin( 20, 40, 0, 0 );
        box(window_main, 0, 0);

}



void create_win_sub()           // .

{

	window_sub = newwin( 18, 38, 1, 1);
        box(window_sub, 0, 0);

}



void exit_win_main()            // .

{

delwin(window_main);

}




void exit_win_sub()             // .

{

delwin(window_sub);

}




void main_win()         // .

{

        mvwprintw(window_main, 1, 1, "window_main");

        refresh_win_main();

        getch();
        

}




void sub_win()          //

{
        erase_win_main();
        create_win_sub();

}




void about_win()                //

{
        erase_win_sub();

        mvwprintw(window_sub, 1, 1, "about_win");

        refresh_win_sub();

	getch();

        erase_win_sub();


}




void login_win()                //

{
        erase_win_sub();
       
	mvwprintw(window_sub, 1, 1, "login_win");

	refresh_win_sub();

	getch();
        
}




void exit_win()         //

{

        erase_win_sub();

	mvwprintw(window_sub, 1, 1, "exit_win");

	refresh();

	getch();

	exit_win_main();
        exit_win_sub();

        endwin();
        
}

