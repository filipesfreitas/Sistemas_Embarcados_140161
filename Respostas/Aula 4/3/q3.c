#include <stdio.h>
#include <stdlib.h>

#define NAME argv[1]
#define IDADE argv[2]

int main(int argc, const char *argv[])
{
	FILE *fp;
	char filename[100];
	sprintf(filename,NAME,".txt");
	printf("%s\t%s\n",NAME,IDADE);
	fp = fopen(filename,"w");
	if(!fp){
		printf("Error ao abrir o arquivo");
		exit(-1);
	}
	else{
		fprintf(fp,"%s\n",NAME);
		fprintf(fp,"%s\n",IDADE);
	}
	fflush(stdout);
	fclose(fp);
	return 0;
}