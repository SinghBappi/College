#!/bin/sh

abc=`cat bbb.txt | grep ^B`
echo "2. Using '^' to find out all the words that start with the letter 'B'"
echo "Output"
echo "$abc"

