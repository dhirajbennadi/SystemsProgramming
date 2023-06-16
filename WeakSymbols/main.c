#include <stdio.h>
#include "weakSymbols.h"

char x = 'a';
char y = 'b';

int main()
{
    printf("%c %c\n", x , y);
    func();
    printf("%c %c\n", x , y);

    printf("%x", *((int*)&x));

    return 0;
}