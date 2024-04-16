#!/bin/sh

read text

words=$(echo -n "$text" | wc -w)
lines=$(echo -n "$text" | wc -c)

echo "Number of words: $words"
echo "Number of lines: $lines"
