#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler (int sig)
{
	wait(0);
}

int main (void)
{
	int l;
	signal(SIGCHLD, &sighandler);
	pid_t pid = fork();
	if (pid == 0) {
		fprintf(stdout,"Child of Samsonov is finished\n");
		_exit(0);
	}
	else {
		fprintf(stdout,"The Parent start ...\n");
		sleep(30);
		fprintf(stdout,"The parent finish\n");
	}
	return EXIT_SUCCESS;
}
