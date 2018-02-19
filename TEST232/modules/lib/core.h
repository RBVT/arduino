#ifndef __CORE_H
#define __CORE_H

void define_port();     // функция для установки подключения .
void open_port();       // функция для открытия порта .
void close_port();      // функция для закрытия порта .

void receive_core();    // функция для получения сигналов " " .
void send_core();       // функция для отправки сигналов " " .
void record_core();     // функция для записи входящих сигналов " " .
void settings_core();   // функция для общих настроек сигналов " " .

#endif