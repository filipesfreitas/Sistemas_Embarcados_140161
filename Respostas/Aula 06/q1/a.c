#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <fcntl.h>

int main(int argc, char const **argv)
{
    pid_t pid_proc;
    int i=0 , pai ;
    
		printf("Processo pai pid: %d\n", pai = (int) getpid());

    do
    {   
			pid_proc = fork() ;
			if (pid_proc == 0)
			{
				return 0;
			}
			else
			{
				printf("Processo filho com pid:%d\n pai pid: %d\n", pid_proc,(int) getppid()); 
			}
    }while ( ++i < 3);

    return 0;
}
