#!/bin/bash

# 5

# letra a

echo -e '\vSaída 5.a:\t'
./prog Filipe

# letra b

echo -e '\vSaída 5.b:\t'
./prog "Filipe Freitas"

# letra c

echo -e '\vSaída 5.c:\t'
echo EU	| ./prog

# letra d

echo -e '\vSaída 5.d:\t'
echo EU	Mesmo | ./prog

# letra e

echo -e '\vSaída 5.e:\t'
echo "EU Mesmo" | ./prog

# letra f

echo -e '\vSaída 5.f:\t'
echo Ola mundo cruel! > test.txt
./prog < test.txt
