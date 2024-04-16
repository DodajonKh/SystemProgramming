#!/bin/sh

echo -n "Enter year (YYYY): "

read text

a="expr $text%4"
b="expr $text%100"
c="expr $text%400"

if [ $a -eq 0 -a $b -ne 0 -o $c -eq 0]
then
echo "$text is leap year"
else
echo "$text is not a leap year"

fi
