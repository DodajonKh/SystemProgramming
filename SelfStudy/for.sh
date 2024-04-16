#!/bin/bash

read -p "enter variable #1" a
read -p "enter variable #2" b


for i in {$a,$b}
do
	echo $i
done
exit 0

