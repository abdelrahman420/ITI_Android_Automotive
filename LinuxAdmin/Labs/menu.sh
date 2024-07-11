#!/bin/bash
PS3="Please Enter Your Choice: "
Options=("Date and Time"  "List files in current directory" "Display current disk usage" "Exit")
select menu in "${Options[@]}"
do 
case $menu in 
"Date and Time")
date
;;
"List files in current directory")
ls
;;
"Display current disk usage")
df -h
;;
"Exit")
echo "Goodbye"
break
;;
*)
echo "Invalid choice. Please enter a number between 1 and 4."
;;
esac
done

