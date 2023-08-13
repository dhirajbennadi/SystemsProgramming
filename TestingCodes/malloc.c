#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr1 = (char*)malloc(sizeof(char) * 3);

    int *ptr2 = (int*)malloc(sizeof(int) * 3);

    printf("%p\n", ptr1);
    printf("%p\n", ptr2);

    printf("%p\n", &ptr1);
    printf("%p\n", &ptr2);

    free(ptr1);
    free(ptr2);

    return 0;
}