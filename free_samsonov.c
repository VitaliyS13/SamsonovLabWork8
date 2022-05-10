#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

extern char ** environ;

int main (void)
{
        char* free_args[] = { "free","-h",NULL };
        pid_t pid = fork();
        if (pid != 0) {
                printf("the child of Samsonov print next info:\n");
                execve("/bin/free",free_args, environ);
        }
        else
                return EXIT_FAILURE;
        return EXIT_SUCCESS;
}

