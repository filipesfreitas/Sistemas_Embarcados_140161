#!/bin/bash
#contain usage of options

version="1.0"
while [[ "$1" =~ ^- && ! "$1" == "--" ]]; do case $1 in
  -V | --version )
    echo $version
    exit
    ;;
  -c | --clean )
    rm *.pdf*
    ;;
  -d | --download )
    wget -i *.txt*
esac; shift; done
if [[ "$1" == '--' ]]; then shift; fi