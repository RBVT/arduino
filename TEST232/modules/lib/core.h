#ifndef __CORE_H
#define __CORE_H

int open_port();       // функция для открытия порта .
int close_port();      // функция для закрытия порта .

int receive_core();    // функция для получения сигналов " " .
int send_core();       // функция для отправки сигналов " " .
int record_core();     // функция для записи входящих сигналов " " .

int settings_core();   // функция для общих настроек сигналов " " .

#endif