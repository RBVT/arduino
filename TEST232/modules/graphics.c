#include "graphics.h"           // абстракция " ncurses " .
#include <string.h>
#include <ncurses.h>            // графика " ncurses " .


WINDOW *window_main;            // .
WINDOW *window_sub;             // .


  int xMax, yMax;               // обьявляем переменные для хранения координат .
  int change_of_size = 1;


void get_size_of_max_xy()      // получаем размер окна терминала .

{

        getmaxyx(stdscr, xMax, yMax);   // получаем размеры терминала и записываем в переменные " max_x " и " max_y " . 
        
}

        struct window_size max;
  
        max.y = change_of_size * ( xMax );
        max.x = change_of_size * ( yMax );


        struct window_size min;
  
        min.x = change_of_size * ( xMax );
        min.y = change_of_size * ( yMax );


void open_scr()               // инициализация графического режима " ncurses ".

{
        
        initscr();
        
}





void close_scr()             // закрываем графику " ncurses ".

{

        refresh();           // .
//        exit_win_main();     // .
//        exit_win_sub();      // . 
        endwin();            // .

}



void modules_output()              // отрисовка " modules " в окнах " window_main " и " window_sub " .

{

mvwprintw(window_main, 1, 1, "modules_output");


}



void create_win_main()          // функция создания окна " window_main " .

{

        window_main = newwin( max.x, max.y, 0, 0 );
        box(window_main, 0, 0);

}



void create_win_sub()           // функция создания окна " window_sub " .

{

	window_sub = newwin( max.x -2 , max.y -2, 1, 1);
        box(window_sub, 0, 0);

}




void refresh_win_main()         // обновляем окно " window_main " .

{

        refresh();
        wrefresh(window_main);

}




void refresh_win_sub()          // обновляем окно " window_sub " .

{

	refresh();
        wrefresh(window_sub);

}




int erase_win_main()            // очищаем окно " window_main " .

{

        werase(window_main);

        return 1;

}




int erase_win_sub()             // очищаем окно " window_sub " .

{

        werase(window_sub);     // очищаем содержимое окна " window_sub " .

        return 1;

}




void exit_win_main()            // функция закрытия окна " window_main " .

{

delwin(window_main);

}




void exit_win_sub()             // функция закрытия окна " window_sub " .

{

delwin(window_sub);

}




void main_win()         // функция отрисовки окна " window_main " .

{

        mvwprintw(window_main, 1, 1, "window_main");

        refresh_win_main();

        getch();
        

}




void sub_win()          // функция отрисовки окна " window_sub " .

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

