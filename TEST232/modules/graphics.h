// 1. примечание : правильно завершать сначала окно sub, а после main .
// 2.  .
// 3.  .

#ifdef __GRAPHICS_H
#define __GRAPHICS_H


void get_size_of_max_xy(struct settings size);

void open_scr();                      // запуск графического режима " ncurses ". 
void close_scr();                     // завершение графического режима " ncurses " .

void modules_output();                // отрисовка " modules " в окнах " window_main " и " window_sub " .

int erase_win_main();                 // удаление элементов в окне " window_main " .
int erase_win_sub();                  // удаление элементов в окне " window_sub " .

void refresh_win_main();              // обновление элементов в окне " window_main " .
void refresh_win_sub();               // обновление элементов в окне " window_sub " .

void create_win_main();               // создание окна " window_main " .
void create_win_sub();                // создание окна " window_sub " .

void exit_win_main();                 // завершение окна " window_main " .
void exit_win_sub();                  // завершение окна " window_sub " .

#endif
