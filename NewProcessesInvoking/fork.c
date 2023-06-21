#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <spawn.h>

int main()
{
    char *args[4] = {"/bin/echo", "Hello" , "Dhiraj", "\0"}; 
    int child_status = 0;
    int resultOfFork = 0;

    resultOfFork = fork();

    if(resultOfFork < 0)
    {
        perror("Forking Failed\n");
        exit(1);
    }

    if(resultOfFork == 0)
    {
        /*Child is created successfully and will have execution context*/
        execv(args[0], args);

        perror("Execv Failed for Child Process\n");
        exit(1);
    }
    else
    {
        /*The parent is waiting for the child process to finish its execution*/
        wait(&child_status);
    }

    return 0;
}