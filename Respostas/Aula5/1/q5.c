#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main( int argc, char **argv){
	int fd;
	char buff[]="Ola Mundo!";
	fd = open("test.txt",O_WRONLY);
	if (fd>0)
	{
		write(fd,buff,sizeof(buff));
	}
	else{
		printf("Error");
		exit(-1);
	}
	
	return 0;
}