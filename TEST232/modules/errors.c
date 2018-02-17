#include "errors.h"
#include <ncurses.h>

enum output_message

{

ncurses, colors

};

void line_1()

{

		initscr();
		curs_set(0);
		refresh();

if
		(initscr())

		{

		printf("OK : ncurses \n");

		}

if
		(initscr() == NULL)

		{

		printf("ERR: ncurses \n");

		}

else

	{

		getch();
		endwin();
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
if
		(has_colors() == FALSE)

		{

		use_default_colors();
		printf("ERR: colors \n");

		}

else

	{

//	endwin();

	}

}

void line_3()

{

if
		(initscr())

		{

		fputs("OK : \n", stdout);

		}
else

	{

		fputs("ERR: \n", stdout);

	}

}

void line_4()

{

if
		(initscr())

		{

		fputs("OK : \n", stdin);

		}
else

	{

		fputs("ERR: \n", stdin);

	}

}

void line_5()

{

if
		(initscr())

		{

		fputs("OK : \n", stdin);

		}
else

	{

		fputs("ERR: \n", stdin);

	}

}