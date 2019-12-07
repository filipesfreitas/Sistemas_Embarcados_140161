#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char **argv){

	int aux = 0;
	while( (++aux) < argc){
	
		printf("Ola %s\n",argv[aux]);
	
	} 
    return 0;
}