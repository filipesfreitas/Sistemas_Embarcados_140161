#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <fcntl.h>


int processcr(pid_t id, int n){
	/*id -> pid do processo; n -> numero de processos a serem criados*/

	if (id == 0)
	{
		return 0;
	}
	else if (--n >= 0)
	{
		printf("Processo filho com pid:%d\n pai pid: %d\n", id,(int) getppid()); 
		processcr(fork(),n);
	}
	else
	{
		return 0;
	}
	

}
int main(int argc, char const **argv)
{
    pid_t pid_proc;
    int i=0 , pai ;
		printf("Processo pai pid: %d\n", pai = (int) getpid());
		pid_proc = fork();
    processcr(pid_proc,3);
		return 0;
}
