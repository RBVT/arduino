#include "tools.h"
#include <stdio.h>
#include <unistd.h>

int hour, minute, second;

void timer_module()

{

    
//    hour = minute = second = 0;
    
while(1)
   
    {         
        
    second++;
 
if
            (second == 60)
 
       {
        
            minute += 1;
            second = 0;
        
        }

if
        
            (minute == 60)
       
        {
        
            hour += 1;
            minute = 0;
          
        }
       
if
 
            (hour == 24)
        
        {
        
            hour = 0;
            minute = 0;
            second = 0;
        
        }
         
    sleep(1);
                
    }
 
return;

}

