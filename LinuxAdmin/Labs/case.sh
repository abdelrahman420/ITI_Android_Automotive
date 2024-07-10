#!/bin/bash
read -p "are you sure : " var
case $var in
yes|YES|Yes|y|Y)
echo $var
;;
no|NO|No|N|n)
echo $var
;;
*)
echo "invalid"
;;
esac