#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <spawn.h>

extern char **environ;

int main(int argc, char **argv)
{
    /*Need Null terminal*/
    char *args[4] = {"/bin/echo", "Hello" , "Dhiraj", "\0"}; 
    int child_status;
    int result;

    if(0 != posix_spawn(&result, args[0], NULL, NULL, args, environ))
    {
        perror("spawn failed\n");
        exit(1);
    }

    wait(&child_status);
}