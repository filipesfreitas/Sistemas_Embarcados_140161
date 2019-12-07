#!/bin/bash
#cd ..
#cd exe2

day=$1
month=$2
year=$3
now=`date +"%Y"`

years=("$1/$2/"`seq -s " $1/$2/" ${now} -1 $((now-10))`)
for i in  "${years[@]}"
do 
    date +%A --date=$i >> answer
done

