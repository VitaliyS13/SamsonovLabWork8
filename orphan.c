#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
	int l;
	pid_t pid = fork();
	if (pid != 0) {
		sleep(10+1);
		_exit(0);
	}
	else
		for (l=0; l<(2*10+1); l++) {
			printf("Parent of Samsonov. My parent pid = %d\n", getppid());
			sleep(1);
		}
	return 0;
}
