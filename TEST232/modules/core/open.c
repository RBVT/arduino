#include "open.h"  
#include "settings.h"                                         // .
#include "dependences.c"                                        // .


// -------------------------------------------------------------------

int open_port_module()                                               // открываем порт сохраненный в " portname " .

{

    fd = open(portname, O_RDWR | O_NOCTTY | O_SYNC);                 // opening port .

    return (fd);

}



int status_port_module()                                           // проверяем статус " fd " .

{

if
    (fd < 0)
    
    {
    
    printf("%s \n", strerror(errno));
    
    }

else
    
    {

    fputs("- OK \n", stdout);

    }

    return(fd);

}



int settings_port_module()

{

if
    (fd >= 0)

    {
  
    printf("read.c : reading!");
  
    }
  
return (fd);

}



int signal_port_module()

{

return(signal);

}
