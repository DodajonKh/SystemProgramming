#!/bin/bash

echo "Enter number"
read num

i=0
sum=0

echo "Enter numbers"
while [ $i -le $num ]
do
 sum=$((sum + i))
 echo $sum
 i=$((i+1))
done

echo "sum of $num integers: $sum"
