#!/bin/bash
fruits=(apple banana cherry melon mango)

for i in ${!fruits[@]}; do
    echo "index is $i value is ${fruits[$i]}"
done
