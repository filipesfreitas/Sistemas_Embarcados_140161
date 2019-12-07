#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fd;
	char nome[20],aux[20];
	int idade;

	printf("Digite seu nome:");
	scanf("%s",nome);

	printf("Digite sua idade:");
	scanf("%d",&idade);

	sprintf(aux,"%s.txt",nome);
	printf("\v%s\v", aux);

	fd = fopen(aux,"w");
	if(!fd)
	{
		fprintf(fd,"Nome: %s\n",nome);
		fprintf(fd,"Idade: %d anos\n",idade);
	}
	else
	{
		printf("Erro na abertura do arquivo\n");
		exit(-1);
	}
	fclose(fd);
	return 0;
}