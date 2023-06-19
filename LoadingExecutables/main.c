#include <stdio.h>

const int number = 10;

int main(int argc, char **argv)
{
    printf("Number of Arguments = %d\n", argc);
    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    printf("Hello Dhiraj\n");

    return 0;
}