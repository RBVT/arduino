#include "error.c"
#include "settings.c"
#include "window.c"
#include <ncurses.h>


int main()

{

error_win();

open_scr();
get_size_of_max_xy();

main_win();
sub_win();
about_win();
login_win();
exit_win();

close_scr();

}
