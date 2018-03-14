#include "settings.c"
#include "open.c"
// #include "read.c"
// #include "send.c"
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



int core_module()

{

define_portname_module();        // функция для установки portname .
define_baudrate_module();        // функция для установки baudrate .
define_databits_module();        // функция для установки databits .
define_parity_module();          // функция для установки parity  .
define_stopbits_module();        // функция для установки stopbits .
define_byteorder_module();       // функция для установки byteorder .
define_flowcontrol_module();     // функция для установки flowcontrol .
define_timeout_module();         // функция для установки timeout .

open_port_module();

}



int main()

{

core_module();

}