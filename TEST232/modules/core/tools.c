#include "tools.h"                                          // .
#include "dependences.c"


// ------------------------------------------------------------------------------------------------------

const char *remove_character_from()                         // removing  " /n " from " buffer " module .

{
    char *output = (char *) malloc(sizeof(char) * 1);

if
    ((output = strchr(buffer, '\n')) != NULL)

    {

    *output = '\0';
      
    }
  
return buffer;

}



// -------------------------------------------------------------------------------------------------------------

int timer_module()                                         // timer module .

{
    
if
    ( seconds++ )
   
    {         
 
if
            (seconds == 60)
 
       {
        
            minutes += 1;
            seconds = 0;
        
        }

if
        
            (minutes == 60)
       
        {
        
            hours += 1;
            minutes = 0;
          
        }
       
if
 
            (hours == 24)
        
        {
        
            hours = 0;
            minutes = 0;
            seconds = 0;
        
        }
         
    sleep(1);
                
    }

    seconds++;

return(1);

}

