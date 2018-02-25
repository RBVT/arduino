#include "settings.h"

#include <errno.h>
#include <fcntl.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

int settings_port(int fd, int speed)

{
    
struct termios tty;

if
    (tcgetattr(fd, &tty) < 0)
        
    {
        
    printf("Error from tcgetattr: %s\n", strerror(errno));
        
return -1;

    }

    cfsetospeed(&tty, (speed_t)speed);
    cfsetispeed(&tty, (speed_t)speed);

    tty.c_cflag |= (CLOCAL | CREAD); 
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8;
    tty.c_cflag &= ~PARENB;
    tty.c_cflag &= ~CSTOPB;
    tty.c_cflag &= ~CRTSCTS;

   
    tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL | IXON);
    tty.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);
    tty.c_oflag &= ~OPOST;

   
    tty.c_cc[VMIN] = 1;
    tty.c_cc[VTIME] = 1;

if
    (tcsetattr(fd, TCSANOW, &tty) != 0)
        
    {
        
    printf("Error from tcsetattr: %s\n", strerror(errno));
        
return -1;

    }

return 0;

}

void detect_signal_port(int fd, int mcount)

{
    
    struct termios tty;

if
    (tcgetattr(fd, &tty) < 0)
    
    {
        
    printf("Error tcgetattr: %s\n", strerror(errno));
        
return;

    }

    tty.c_cc[VMIN] = mcount ? 1 : 0;
    tty.c_cc[VTIME] = 5;

if
    (tcsetattr(fd, TCSANOW, &tty) < 0)
        
    printf("Error tcsetattr: %s\n", strerror(errno));

}