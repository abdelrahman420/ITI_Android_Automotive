#!/bin/bash
#prints optons to user and user select one of them

PS3="Please Enter Your Choice: "
select color in red blue orange
do
echo $color
break
done
