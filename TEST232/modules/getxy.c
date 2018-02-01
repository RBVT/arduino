#include <ncurses.h>

int main()

{

	int xmax, ymax;

	initscr();
	getmaxyx(stdscr, xmax, ymax);
	endwin();

	printf("%d\n" "%d\n", xmax, ymax);

return 0;

}
