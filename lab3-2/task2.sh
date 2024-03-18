#!/bin/bash

# Function to find the sum of digits
sum_of_digits() {
    num=$1
    sum=0

    while [ $num -gt 0 ]; do
        digit=$((num % 10))
        sum=$((sum + digit))
        num=$((num / 10))
    done

    echo $sum
}

# Main program
read -p "Enter a number: " input_number

# Call the function and store the result in the variable 'result'
result=$(sum_of_digits $input_number)

# Display the result
echo "The sum of digits in $input_number is: $result"

