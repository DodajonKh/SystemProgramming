#!/bin/bash

# Specify the directory you want to search (replace "/path/to/directory" with your desired directory)
directory="/home/satoshi_khd/Desktop/"

# Use find command to get a list of filenames in the specified directory
file_list=$(find "$directory" -type f)

# Check if any files are found
if [ -z "$file_list" ]; then
    echo "No files found in the specified directory."
    exit 1
fi

# Iterate over the list of filenames using a for loop
echo "List of filenames in $directory:"
for file in $file_list; do
    echo "$file"
done
