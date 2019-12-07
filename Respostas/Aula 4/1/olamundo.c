#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE *fd;
	char msg[] ="ola mundo!"; 
	if ((fd = fopen("ola_mundo.txt","w+")) >= 0 ){
		fwrite(msg,sizeof(char),sizeof(msg),fd);
	}
	else
	{
		printf("Erro na abertura do arquivo\n");
		exit(-1);
	}
	return 0;
}