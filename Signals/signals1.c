#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MESSAGE "Singal Handler Invoked\n"
#define MSGLEN strlen(MESSAGE)

static void sig_handler(int this_signal)
{
    if(this_signal == SIGINT)
    {
        write(STDOUT_FILENO, MESSAGE, MSGLEN);
    }
}

int main()
{
    signal(SIGINT, sig_handler);
    unsigned long counter = 0;


    while(1)
    {
        printf("Counter = %ld\n", counter);
        counter++;
        usleep(250000);
    }

    return 0;
}

