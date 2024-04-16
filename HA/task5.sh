#!/bin/bash

# Check if exactly two command-line arguments are provided
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <number1> <number2>"
    exit 1
fi

# Assign command-line arguments to variables
num1=$1
num2=$2

# Calculate sum, difference, product, and quotient using expr
sum=$(expr "$num1" + "$num2")
difference=$(expr "$num1" - "$num2")
product=$(expr "$num1" \* "$num2")  # Note: '*' needs to be escaped in expr
quotient=$(expr "$num1" / "$num2")

# Display the results with appropriate messages
echo "Calculations for $num1 and $num2:"
echo "Sum: $sum"
echo "Difference: $difference"
echo "Product: $product"
echo "Quotient: $quotient"

