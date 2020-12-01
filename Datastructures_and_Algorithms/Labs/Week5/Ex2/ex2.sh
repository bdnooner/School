#!/bin/bash

COUNTER=1

while [ $COUNTER -le 10 ]
do
	echo -e "Test $COUNTER\n"
	./Ex2.exe
	COUNTER=$(($COUNTER + 1))
done
