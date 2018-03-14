#include "help.h"
#include "dependences.c"

// -----------------------------------------------------------------

void about_portname_help()

{

char *about_portname_help_messige[] = {
"Specify the serial port to configure.          ",
"                                               ",
"/dev/ttyACM0    — real com port adress .       ",
"/dev/ttyUSB0    — emulated com port adress .   ",
"/dev/ttyS0      — another devices .            ",
};

}

// -----------------------------------------------------------------

void about_baudrate_help()

{

char *about_baudrate_help_messige[] = {
"Specify the rate at which bits are         ",
"transmitted for the serial interface.      ",
"                                           ",
"300     —  for baudrate                    ",
"600     —  for baudrate                    ",
"1200    —  for baudrate                    ",
"2400    —  for baudrate                    ",
"4800    —  for baudrate                    ",
"9600    —  for baudrate (default)          ",
"19200   —  for baudrate                    ",
"38400   —  for baudrate                    ",
"57600   —  for baudrate                    ",
"115200  —  for baudrate                    ",
};

}

// -----------------------------------------------------------------

void about_databits_help()

{
    
char *about_databits_help_messige[] = {
"Specify the number of data bits to transmit over the serial interface.                   ",
"Default value is 8 and other available values are 5, 6, and 7 .                          ",
};

}

// -----------------------------------------------------------------

void about_parity_help()

{

char *about_parity_help_messige[] = {
"Specify how you want to check parity bits in                                            ",
"the data bits transmitted via the serial port.                                          ",
"                                                                                        ",
"none    — no parity checking is done .                                                  ",
"even    — parity bit is set to 0 if the number of ones in a given set of bits is even . ",
"odd     — parity bit is set to 1 if the number of ones in a given set of bits is odd .  ",
"mark    — parity bit is always set to 1 .                                               ",
"space   — parity bit is always set to 0 .                                               ",
};

}

// -----------------------------------------------------------------

void about_stopbits_help()

{

char *about_stopbits_help_messige[] = {
"Specify the number of bits used to              ",
"indicate the end of a byte.                     ", 
"                                                ",
"8 bits  — 8-N-1 (default) .                     ",
"7 bits  — 7-N-1 .                               ",
"6 bits  — 6-N-1 .                               ",
"5 bits  — 5-N-1 .                               ",
};

}

// -----------------------------------------------------------------

void about_byteorder_help()

{

char *about_byteorder_help_messige[] = {
"Configure byte order to the appropriate value for your              ",
"instrument before performing a read or write operation.             ",
"Refer to your instrument documentation for information              ",
"about the order in which it stores bytes.                           ",
"                                                                    ",
"littleEndian — (default) .                                          ",
"bigEndian    — .                                                    ",
};

}

// -----------------------------------------------------------------

void about_flowcontrol_help()

{

char *about_flowcontrol_help_messige[] = {
"Specify the process of managing the rate of     ",
"data transmission on your serial port.          ",
"                                                ",
"none     — (default) .                          ",
"hardware — .                                    ",
};

}

// -----------------------------------------------------------------

void about_timeout_help()

{

char *about_timeout_help_messige[] = {
"Specify the amount of time that the model will         ",
"wait for the data during each simulation time step.    ",
"                                                       ",
"10 seconds — (default) .                               ",
};

}
