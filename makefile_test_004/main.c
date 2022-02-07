#include <stdio.h>
#include "local_add.h"

int main()
{
    printf("hello main!\n");
    int c = add_int(2, 3);
    double d = add_double(2.0, 3.0);
    printf("end main!\n");
    return 0;
}