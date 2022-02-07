#include <stdio.h>
#include "local_add_int.h"

int local_add_int(int a, int b)
{
    printf("hello local_add_int!\n");
    int c = a + b;
    printf("c=%d\n", c);
    printf("end local_add_int!\n");
    return c;
}
