#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void get_name(char *string){
	
	int length=0;
	fflush(stdin);
	
	do{
		string = (char *)realloc((void *)string, sizeof(char)*(++length));
		string[length-1] = fgetc(stdin);
	}while(string[length-1]!='\n');

	printf("\v\t %s\v", string);
}

int main( int argc, char **argv){
	char *string;
    printf(" Digite o seu nome: ");
    get_name(string);
    return 0;
}
