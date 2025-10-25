#!/bin/sh
echo "Enter a number:"
read num
if [ $num -ge 10 ] && [ $num -le 99 ] || [ $num -le -10 ] && [ $num -ge -99 ]
then 
echo "$num is a two digit no"
else 
echo "$num is not a two digit no"
fi
