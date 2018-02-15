#!/bin/bash

clear

echo 

echo ~ rm.sh скрипт удалил следующие файлы:

echo

ls *.{so,o}

echo 

rm errors.o
rm config.o
rm windows.o
rm graphics.o

rm errors.so
rm config.so
rm window.so
rm graphics.so

rm main.out

sleep 1

clear
