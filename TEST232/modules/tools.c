#include "tools.h"
#include <unistd.h>

int hours, minutes, seconds;

int timer_module()

{

    
//    hour = minute = second = 0;
    
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

return(seconds);

}

