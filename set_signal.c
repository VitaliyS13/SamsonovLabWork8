#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
        pid_t pid = (pid_t) atoi(argv[1]);
        if(!kill(pid,SIGUSR2))
                printf("Send signal to the process of Samsonov with PID=%d\n",pid);
        else
                fprintf(stderr,"Error!\n");
        return EXIT_SUCCESS;
}

