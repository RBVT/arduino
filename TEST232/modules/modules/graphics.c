#include "graphics.h"           // абстракция ncurses .
#include <ncurses.h>            // графика ncurses .


WINDOW *window_main;            // .
WINDOW *window_sub;             // .

int max_x, max_y;               // переменные для хранения размеров терминала .


void get_size_of_max_xy()      // получаем размер окна терминала .

{
       
        getmaxyx(stdscr, max_x, max_y);   // получаем размеры терминала и записываем в переменные "max_x" и "max_y" . 
        
}



void open_scr()               // инициализация графического режима .

{
        
        initscr();
        noecho();             // .
        curs_set(0);          // .
        
}





void close_scr()             // закрываем графику .

{

        refresh();           // .
        exit_win_main();     // .
        exit_win_sub();      // . 
        endwin();            // .

}


int erase_win_main()            // очищаем окно main .

{

        werase(window_main);

        return 1;

}




int erase_win_sub()             // очищаем окно sub .

{

        werase(window_sub);     // очищаем содержимое окна "sub" .

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




void create_win_main()          // функция создания окна "main" .

{

        window_main = newwin( max_x, max_y, 0, 0 );
        box(window_main, 0, 0);

}



void create_win_sub()           // функция создания окна "sub" .

{

	window_sub = newwin( max_x -2 , max_y -2, 1, 1);
        box(window_sub, 0, 0);

}



void exit_win_main()            // функция закрытия окна "main" .

{

delwin(window_main);

}




void exit_win_sub()             // функция закрытия окна "sub" .

{

delwin(window_sub);

}




void main_win()         // функция отрисовки окна main .

{

        mvwprintw(window_main, 1, 1, "window_main");

        refresh_win_main();

        getch();
        

}




void sub_win()          // функция отрисовки окна sub .

{
        erase_win_main();
        create_win_sub();

}




void about_win()                // .

{
        erase_win_sub();

        mvwprintw(window_sub, 1, 1, "about_win");

        refresh_win_sub();

	getch();

        erase_win_sub();


}




void login_win()                // .

{
        erase_win_sub();
       
	mvwprintw(window_sub, 1, 1, "login_win");

	refresh_win_sub();

	getch();
        
}




void exit_win()         // .

{

        erase_win_sub();

	mvwprintw(window_sub, 1, 1, "exit_win");

	refresh();

	getch();

	exit_win_main();
        exit_win_sub();

        endwin();
        
}

