#!/bin/bash

if [ "$#" -ne 2 ]; then
	echo "Usage: $0 <file1> <file2>"
	exit 1
fi

file1="$1"
file2="$2"

if [ ! -e "$file1" ] || [ ! -e "$file2" ]; then
	echo "Error both files must exist"
fi

if cmp -s "$file1" "$file2"; then
	echo "File contents are the same, removing the second file"
	rm "$file2"
else
	echo "File contents must be the same"
fi

exit 0
