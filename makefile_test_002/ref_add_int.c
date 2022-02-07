#include <stdio.h>

int add_int(int a, int b)
{
    printf("hello add_int!\n");
    int c = a + b;
    printf("c=%d\n", c);
    printf("end add_int!\n");
    return c;
}
