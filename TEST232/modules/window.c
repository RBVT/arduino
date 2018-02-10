// минимальный код для создания окна при помощи библиотеки ncurses.h

#include <ncurses.h>

 
int main()

{

	initscr();
	curs_set(0);
    
	WINDOW *window_main;
   
	window_main = newwin( 20, 20, 0, 0 );
	box(window_main, 0, 0);

	refresh();
	wrefresh(window_main);
        

	getch();

	delwin(window_main);
	endwin();
 
return 0;
 
}


