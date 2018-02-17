#include "errors.h"
#include <ncurses.h>

void line_1()

{

		initscr();
		refresh();

if
		(initscr())

		{

		printf("OK : ncurses \n");

		}
else

	{

		printf("ERR: ncurses \n");
		getch();

	}

}

void line_2()

{
		has_colors();
		refresh();

if
		(has_colors() == TRUE)

		{

		start_color();
		printf("OK : colors \n");

		}
else

	{

		printf("ERR: colors \n");
		endwin();

	}

}

void line_3()

{

if
		(initscr())

		{

		fputs("OK : ncurses \n", stdout);

		}
else

	{

		fputs("ERR: ncurses \n", stdout);

	}

}

void line_4()

{

if
		(initscr())

		{

		fputs("OK : ncurses \n", stdin);

		}
else

	{

		fputs("ERR: ncurses \n", stdin);

	}

}

void line_5()

{

if
		(initscr())

		{

		fputs("OK : ncurses \n", stdin);

		}
else

	{

		fputs("ERR: ncurses \n", stdin);

	}

}