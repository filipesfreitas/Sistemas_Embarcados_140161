#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"../include/num_caracs.h"

int main( int argc, char **argv){

	int aux = 0;

	printf("\v");
	while( (++aux) < argc){
	 printf("Argumento: %s\tNumero de caracteres: %i\n",argv[aux],Num_Caracs(argv[aux]));
	
	} 
	printf("\v\n");
    return 0;
}