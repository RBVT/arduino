#include "error.c"
#include "settings.c"
#include "window.c"
#include <ncurses.h>


int main()

{

false_status();
true_status();
output_status();
parsing_status();
parsing_win();

open_scr();
get_size_of_max_xy();


create_win_main();
refresh_win_main();

create_win_sub();
refresh_win_sub();

main_win();
sub_win();
about_win();
login_win();
exit_win();

close_scr();

}
