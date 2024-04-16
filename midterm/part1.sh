#!/bin/bash

# Check if the directory path argument is provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <directory_path>"
    exit 1
fi

# Check if the provided directory exists
if [ ! -d "$1" ]; then
    echo "Error: Directory '$1' does not exist."
    exit 1
fi

# Create backup directory if it doesn't exist
backup_dir="$1/backup"
if [ ! -d "$backup_dir" ]; then
    mkdir "$backup_dir"
    echo "Backup directory created: $backup_dir"
    cp -r $1/* $backup_dir
fi

