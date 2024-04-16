#!/bin/bash

read -p "first variable" a
read -p "second variable" b

for i in {$a,$b}
do
	echo $i 
done
exit 0