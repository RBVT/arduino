#include "settings.c"
#include "open.c"
#include "read.c"
#include "send.c"

#include "core.h"

/*

    1	GND - Earth Ground .                    14	TXD - Secondary .
    2	TXD - Transmitted Data	.               15	Transmit Clock .
    3	RXD - Received Data	.                   16	RXD -Secondary .
    4	RTS - Request To Send .                 17	Receiver Clock .
    5	CTS - Clear To Send .	                18	Unassigned .
    6	DSR - Data Set Ready .	                19	Secondary RTS .
    7	GND - Logic Ground .	                20	DTR - Data Terminal Ready .
    8	DCD - Data Carrier Detect .	            21	Signal Quality Detect .
    9	Reserved .	                            22	Ring Detect .
    10	Reserved .	                            23	Data Rate Select .
    11	Unassigned .	                        24  Transmit Clock .
    12	DCD - Secondary .	                    25	Unassigned .
    13	CTS - Secondary .

*/




int define_port(int marker_1)     // функция для установки подключения .

{

settings_port(fd, speed);

return (marker_1)

}

int open_port(int marker_2)       // функция для открытия порта .

{

open_port(int fd);

}

void close_port()      // функция для закрытия порта .

{



}


void receive_core()    // функция для получения сигналов " " .

{



}

void send_core()       // функция для отправки сигналов " " .

{



}

void record_core()     // функция для записи входящих сигналов " " .

{



}

void settings_core()   // функция для общих настроек сигналов " " .

{



}