#!/bin/bash

# Check if there are at least two command-line arguments
if [ "$#" -lt 2 ]; then
    echo "Usage: $0 arg1 arg2 [arg3 ...]"
    exit 1
fi

# Set variables using the first two command-line arguments
var1=$1
var2=$2

# Display the initial values of the variables
echo "Initial values:"
echo "var1: $var1"
echo "var2: $var2"
echo

# Unset the variables
unset var1
unset var2

# Display the values after unsetting
echo "Values after unset:"
echo "var1: $var1"  # This should print nothing
echo "var2: $var2"  # This should print nothing
echo

# Shift the command-line arguments to demonstrate the change
echo "Shifting arguments:"
shift  # Shifts arguments to the left (drops the first argument)
echo "var1: $1"  # The first argument after shifting
echo "var2: $2"  # The second argument after shifting
echo

# Display the remaining arguments after shifting
echo "Remaining arguments:"
shift  # Shifts arguments again
while [ "$#" -gt 0 ]; do
    echo "Argument: $1"
    shift
done

