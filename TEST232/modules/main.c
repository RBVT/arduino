#include "error.c"
#include "settings.c"
#include "window.c"
#include <ncurses.h>


int main()

{

error_win();
get_size_of_win();
about_win();
login_win();
main_win();
exit_win();

}
