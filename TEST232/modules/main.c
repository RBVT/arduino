#include "errors.c"
#include "config.c"
#include "keypad.c"
#include "tools.c"
#include "graphics.c"


int main()

{

line_1();
line_2();
line_3();
line_4();
line_5();

open_scr();
shadow_config();           // активация динамических опций .
light_config();            // активация статических опций .
get_size_of_max_xy();


// get_size_of_max_x();    // получаем размер окна терминала для "x".
// get_size_of_max_y();    // получаем размер окна терминала для "y" .

        create_win_main();

        modules_output();

        timer_module();
        
        refresh_win_main();

        wgetch(window_main);


        erase_win_main();

 //   

 //   mvwprintw(window_main, 1, 1, "%d %d %d", hour, minute, second);
    
    



/// create_win_sub();
/// refresh_win_sub();

/// getch();

// main_win();

// create_win_sub();
// refresh_win_sub();

// sub_win();

// about_win();

// login_win();
// exit_win();

        close_scr();

}
