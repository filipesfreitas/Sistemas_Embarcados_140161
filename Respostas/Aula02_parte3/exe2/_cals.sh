#!/bin/bash

nome=($*)
for i in $(seq 0 2 ${#nome[@]})
do 
    cal ${nome[$i]} ${nome[$i+1]}
done