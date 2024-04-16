#!/bin/bash

# Function to display script usage
display_usage() {
  echo "Usage: $0 <filename> <pattern>"
  exit 1
}

# Function to handle errors
error_handling() {
  echo "Error: Something went wrong."
  exit 1
}

# Check if the correct number of arguments is provided
if [ "$#" -ne 2 ]; then
  display_usage
fi

# Set the filename and pattern from command line arguments
filename=$1
pattern=$2

# Use trap to catch errors and call handle_error function
trap 'error_handling' ERR

# Use grep to search for the pattern in the file
grep "$pattern" "$filename"

# Disable the trap for successful execution
trap - ERR

echo "Search completed successfully."
