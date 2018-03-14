#ifndef __OPEN_H
#define __OPEN_H


int fd;                                 // создаем фаил дескриптор " fd " .                        
int signal;

char* define_settings_module();         // функция для установки settings .
int status_port_module();              // проверяем статус " fd " .
int signal_port_module();              // проверка есть ли входящие сигналы .
int open_port_module();                 // открываем порт сохраненный в " portname " .

#endif