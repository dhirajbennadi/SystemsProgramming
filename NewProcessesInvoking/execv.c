#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


int main()
{
    /*Need Null terminal*/
    char *args[4] = {"/bin/echo", "Hello" , "Dhiraj", "\0"}; 

    execv(args[0], args);

    perror("execv failed");

    exit(1);
}