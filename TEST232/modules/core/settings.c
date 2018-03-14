#include "settings.h"                                       // .
#include "tools.c"                                          // .
#include "dependences.c"


// -------------------------------------------------------------------

char * define_portname_module() // функция для установки portname .

{

    printf ("Define adress to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *portname = *buffer;

return portname;

}


// -----------------------------------------------------------------------

char * define_baudrate_module() // функция для установки baudrate .


{

    printf ("Define baudrate to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *baudrate = *buffer;

return baudrate;

}


// ----------------------------------------------------------------------

char * define_databits_module() // функция для установки databits .


{

    printf ("Define databits to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *databits = *buffer;

return databits;

}


// ----------------------------------------------------------------------

char * define_parity_module() // функция для установки parity  .

{

    printf ("Define parity to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *parity = *buffer;

return parity;

}


// ----------------------------------------------------------------------

char * define_stopbits_module() // функция для установки stopbits .

{

    printf ("Define stopbits to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *stopbits = *buffer;

return stopbits;

}


// -----------------------------------------------------------------------

char * define_byteorder_module() // функция для установки byteorder .

{

    printf ("Define byteorder to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *byteorder = *buffer;

return byteorder;

}


// ----------------------------------------------------------------------

char * define_flowcontrol_module() // функция для установки flowcontrol .

{

    printf ("Define flowcontrol to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *flowcontrol = *buffer;

return flowcontrol;

}


// ---------------------------------------------------------------------

char * define_timeout_module() // функция для установки timeout .

{

    printf ("Define timeout to port : \n");
  
if
    (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {

remove_character_from();

    }

    *timeout = *buffer;

return timeout;

}