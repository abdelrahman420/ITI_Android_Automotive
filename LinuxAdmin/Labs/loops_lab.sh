
x=0
y=3
while [[ $x -le 6 && $y -ge 0 ]];do
echo "x is $x"
echo "y is $y"
((x++))
((y--))
done



