#!/bin/sh
fruits_file=`cat fruits2.txt | grep App.e`
echo "1. Using dot to find the original word, whereas given word is 'App.e'"
echo "Output"
echo "$fruits_file"
