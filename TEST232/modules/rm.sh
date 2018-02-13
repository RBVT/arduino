#!/bin/bash

clear

echo 

echo rm.sh скрипт удаляет следующие файлы:

echo

ls *.{so,o}

echo 

rm error.o
rm settings.o
rm window.o

rm error.so
rm settings.so
rm window.so

rm main.out
