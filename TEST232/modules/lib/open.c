#include "open.h"                                           // .

#include <stdio.h>                                          // .
#include <string.h>                                         // .
#include <unistd.h>                                         // .
#include <fcntl.h>                                          // .
#include <errno.h>                                          // .
#include <termios.h>                                        // .



int open_port()                                             // возвращает -1 при ошибке .

{

    int fd;                                                 // файл дескриптор .

    fd = open("/dev/USB0", O_RDWR | O_NOCTTY | O_NDELAY);

if
    (fd == -1)

    {

    fd = open("/dev/ACM0", O_RDWR | O_NOCTTY | O_NDELAY);

    }


if
    (fd == -1)

    {
  
    perror("open_port: unable to open serial port \n");
  
    }
  
else
   
    fcntl(fd, F_SETFL, 0);

return (fd);

}
