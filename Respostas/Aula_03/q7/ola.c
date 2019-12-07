#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char **argv){

	int aux = 0;
	while( (++aux) < argc){
	 printf("\vArgumento: %s\tNumero de caracteres: ",argv[aux]);
	
	} 
	printf("\v\n");
    return 0;
}