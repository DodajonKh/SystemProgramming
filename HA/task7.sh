#!/bin/bash

# Specify the filename
filename=$1

# Check if the file exists
if [ -e "$filename" ]; then
    echo "File already exists."
else
    # Use the touch command to create the file if it doesn't exist
    touch "$filename" && echo "File created successfully."
fi

