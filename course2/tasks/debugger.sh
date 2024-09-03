#!/bin/bash
echo > out.log

for ((count=0;;count++))
do
		./exm.sh &>> out.log
		if [[ $? -ne 0 ]]; then
				cat out.log
				echo "failed after $count times"
				break
		fi
done
