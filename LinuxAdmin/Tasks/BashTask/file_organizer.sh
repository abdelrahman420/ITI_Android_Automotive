#!/bin/bash

<<<<<<< HEAD

read -p "Enter source directory : " directory

eval cd "$directory"

mkdir images documents others

for file in *; do
    if [ -f "$file" ]; then
        case "$file" in
            *.txt | *.doc | *.pdf)
=======
read -p "Enter source directory: " directory

eval cd "$directory" 

mkdir -p images documents others

for file in *; do
    if [ -f "$file" ]; then  
        case "$file" in
            *.txt|*.doc|*.pdf)
>>>>>>> 8ee2f73addd01467017ef5df6df4fdb697dd9ee7
                mv "$file" documents/
                ;;
            *.png|*.jpg|*.gif)
                mv "$file" images/
                ;;
            *)
                mv "$file" others/
                ;;
<<<<<<< HEAD
            esac
=======
        esac
>>>>>>> 8ee2f73addd01467017ef5df6df4fdb697dd9ee7
    fi
done
