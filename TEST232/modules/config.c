#include "config.h"
#include <ncurses.h>

#define TRUE 1
#define FASLE 0


void shadow_config()        // динамические настройки обьектов .

{

noecho();                   // .
curs_set(0);                // .

nodelay(stdscr, TRUE);       // nonblocking режим для " getch() " .

}


void light_config()         // статические настройки обьектов .

{



}
