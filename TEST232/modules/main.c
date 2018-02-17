#include "tools.c"
#include "graphics.c"


int main()

{


// false_status(); 
// true_status();
// output_status();
// parsing_status();
// parsing_win();


open_scr();
get_size_of_max_xy();


// get_size_of_max_x();    // получаем размер окна терминала для "x".
// get_size_of_max_y();    // получаем размер окна терминала для "y" .

        create_win_main();

        modules_output();

        timer_module();
        
        refresh_win_main();

        getch();


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
