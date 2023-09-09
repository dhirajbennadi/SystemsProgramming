#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *mallocAndPrint(int size)
{
    void *ret = malloc(size * sizeof(int));
    printf("Malloc'd Printer of size %d at %p\n", size, ret);
    return ret;
}

int main()
{
    void *ptr1;
    void *ptr2;
    void *ptr3;

    /*4 Bytes*/
    ptr1 = mallocAndPrint(sizeof(int) * 4);
    memset(ptr1, 'A', sizeof(int) * 4);
    /*8 Bytes*/
    ptr2 = mallocAndPrint(sizeof(int) * 8);
    memset(ptr2, 'B', sizeof(int) * 8);
    /*16 Bytes*/
    ptr3 = mallocAndPrint(sizeof(int) * 16);
    memset(ptr3, 'C', sizeof(int) * 16);


    return 0;
}