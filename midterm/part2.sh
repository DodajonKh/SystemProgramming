#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <file_name>"
    exit 0
fi

num_lines=$(wc -l $1)
num_words=$(wc -w $1)
num_chars=${#$}

echo "number lines: " $num_lines
echo "number words: " $num_words
echo "number characters: " $num_words

spec_word=$(grep -q "Lorem" $1)

if [ -n  $spec_word ] && [ $spec_word -ne 1]; then
    echo "The word 'Lorem' found in the file:" $1
else
    echo "The word 'Lorem' not found"
fi

exit 0
