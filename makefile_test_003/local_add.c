#include <stdio.h>
#include "local_add_int.h"
#include "local_add.h"

int add_int(int a, int b)
{
    printf("hello add_int!\n");
    int c = local_add_int(a, b);
    printf("end add_int!\n");
    return c;
}
