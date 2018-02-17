// 1. примечание : правильно завершать сначала окно sub, а после main .
// 2.  .
// 3.  .

#ifdef __GRAPHICS_H
#define __GRAPHICS_H


void get_size_of_max_xy();

void open_scr();                      // запуск графического режима . 
void close_scr();                     // завершение графического режима .

void modules_output();                // отрисовка " modules " в окнах " window_main " и " window_sub " .

int erase_win_main();                 // удаление элементов в окне main .
int erase_win_sub();                  // удаление элементов в окне sub .

void refresh_win_main();              // обновление элементов в окне main.
void refresh_win_sub();               // обновление элементов в окне sub.

void create_win_main();               // создание окна main .
void create_win_sub();                // создание окна sub .

void exit_win_main();                 // завершение окна main .
void exit_win_sub();                  // завершение окна sub .

#endif
