#!/bin/bash
select department in CS IT DS
do
 case $department in 
CS)
echo "i am from cs department"
;;
IT)
echo "i am from IT department"
;;
DS)
echo "i am from DS deparment"
;;
none)
break
;;
*)
echo "invalid select"
esac
done
