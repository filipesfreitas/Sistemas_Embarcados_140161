#!/bin/bash

for i in $(seq $1)	
do
echo  "Número do arquivo = ${i}" > "_teste${i}.txt_"
done
