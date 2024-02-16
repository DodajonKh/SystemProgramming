#!/bin/sh


echo "for loop"
for foo in "bar fud 43"
do
  echo $foo
done

echo "while loop"
boo=1

while [ "$boo" -le 3 ]
do
  echo "Here we go again"
  boo=$(($boo+1))
done

echo "until"

a=1

until [ $a -eq 5 ]

do
  echo "This is a"
  a=$((a+1))
done
exit 0
