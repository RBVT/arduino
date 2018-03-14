#ifndef __SETTINGS_H
#define __SETTINGS_H

/*

struct {
    char portname[13];                        // для хранения адреса порта .
    char baudrate[12];                        // для хранения порта .
    char databits[12];                        // для хранения порта .
    char parity[12];                          // для хранения порта .
    char stopbits[12];                        // для хранения порта .
    char byteorder[12];                       // для хранения порта .
    char flowcontrol[12];                     // для хранения порта .
    char timeout[12];
} *settings;

*/

    char portname[13];                        // для хранения адреса порта .
    char baudrate[12];                        // для хранения порта .
    char databits[12];                        // для хранения порта .
    char parity[12];                          // для хранения порта .
    char stopbits[12];                        // для хранения порта .
    char byteorder[12];                       // для хранения порта .
    char flowcontrol[12];                     // для хранения порта .
    char timeout[12];

char * define_portname_module();        // функция для установки portname .
char * define_baudrate_module();        // функция для установки baudrate .
char * define_databits_module();        // функция для установки databits .
char * define_parity_module();          // функция для установки parity  .
char * define_stopbits_module();        // функция для установки stopbits .
char * define_byteorder_module();       // функция для установки byteorder .
char * define_flowcontrol_module();     // функция для установки flowcontrol .
char * define_timeout_module();         // функция для установки timeout .

int settings_port();
int set_baudrate_module();
void detect_signal_port();


#endif