#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char **argv){

	int aux = 0;
	while( (++aux) < argc){
	
		printf("Ola %s\n",argv[aux]);
	
	} 
	printf("Número de entradas = %d\n", --argc);
    return 0;
}