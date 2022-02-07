#include <stdio.h>
#include "ref_add_int.h"

int main()
{
    printf("hello main!\n");
    int c = add_int(2, 3);
    printf("end main!\n");
    return 0;
}