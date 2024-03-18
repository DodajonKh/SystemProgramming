#!/bin/bash

# Check if correct number of arguments are provided
if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <filename> <start_line> <end_line>"
    exit 1
fi

# Assign command line arguments to variables
filename=$1
start_line=$2
end_line=$3

# Use sed to display lines between start_line and end_line
sed -n "${start_line},${end_line}p" "$filename"

exit 0
