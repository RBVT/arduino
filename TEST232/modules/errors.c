#include "errors.h"
#include <ncurses.h>

enum output_message

{

ncurses, colors

};

void line_1()

{

		initscr();
		has_colors();
		curs_set(0);
		refresh();

if
		(initscr())

		{

		printf("OK : ncurses \n");

		}

if
		(!initscr())                // == NULL .

		{

		printf("ERR: ncurses \n");

		}

else

	{



	}

}

void line_2()

{

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



	}

}

void line_3()

{

if
		(!initscr())

		{

		fputs("OK : line_3 \n", stdout);

		}
else

	{

		fputs("ERR: line_3 \n", stdout);

	}

}

void line_4()

{

if
		(!initscr())

		{

		fputs("OK : line_4 \n", stdin);

		}
else

	{

		fputs("ERR: line_4 \n", stdin);

	}

}

void line_5()

{

if
		(!initscr())

		{

		fputs("OK : line_5 \n", stdin);

		}
else

	{

		fputs("ERR: line_5 \n", stdin);

	}

}