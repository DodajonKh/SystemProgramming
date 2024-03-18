C#!/bin/bash

if [ "$#" -ne 1 ]; then 
	echo "usage: $0 <directory>"
	exit 1
fi

directory="$1"

if [ ! -d "$directory" ]; then
	echo "Error: the entered directory doesn't exist"
	exit 1
fi

ls -af
exit 0
