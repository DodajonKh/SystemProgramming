#!/bin/bash


find_greatest(){
    read -p "Enter 3 numbers separated by spaces: " -a nums

    if [ ${nums[0]} -gt ${nums[1]} ] && [ ${nums[0]} -gt ${nums[2]} ]; then
        echo "The greatest number is: ${nums[0]}"
    elif [ ${nums[1]} -gt ${nums[0]} ] && [ ${nums[1]} -gt ${nums[2]} ]; then
        echo "The greatest number is: ${nums[1]}"
    elif [ ${nums[2]} -gt ${nums[0]} ] && [ ${nums[2]} -gt ${nums[1]} ]; then
        echo "The greatest number is: ${nums[2]}"
    fi
}

find_greatest
