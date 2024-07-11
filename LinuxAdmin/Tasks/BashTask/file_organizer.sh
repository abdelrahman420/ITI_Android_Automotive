#!/bin/bash


read -p "Enter source directory : " directory

eval cd "$directory"

mkdir images documents others

for file in *; do
    if [ -f "$file" ]; then
        case "$file" in
            *.txt | *.doc | *.pdf)
                mv "$file" documents/
                ;;
            *.png|*.jpg|*.gif)
                mv "$file" images/
                ;;
            *)
                mv "$file" others/
                ;;
            esac
    fi
done