#include "window.h"
#include <ncurses.h>




WINDOW *window_main;
WINDOW *window_sub;



int erase_win_main()

{

        werase(window_main);

        return 1;

}




int erase_win_sub()

{

        werase(window_sub);

        return 1;

}




void refresh_win_main()

{

        refresh();
        wrefresh(window_main);

}




void refresh_win_sub()

{

	refresh();
        wrefresh(window_sub);

}




void create_win_main()

{

        window_main = newwin( 40, 40, 0, 0 );
        box(window_main, 0, 0);

}



void create_win_sub()

{

	window_sub = newwin( 18, 38, 1, 1);
        box(window_sub, 0, 0);

}




void main_win()

{

        mvwprintw(window_main, 1, 1, "window_main");

        refresh_win_main();

        getch();

        erase_win_main();        

}




void sub_win()

{

        create_win_sub();

}




void about_win()

{
        mvwprintw(window_sub, 1, 1, "about_win");

        refresh_win_sub();

	getch();

        erase_win_sub();


}




void login_win()

{

       
	mvwprintw(window_sub, 1, 1, "login_win");


	refresh_win_sub();

	getch();
        
        erase_win_sub();

}




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

