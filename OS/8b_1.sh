#!/bin/bash
#Read a range using for loop 
for num in {10..30..5}
do
if (($num%10==0))
then 
echo "$num is divisible by 10"
fi
done
