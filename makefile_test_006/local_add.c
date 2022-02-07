#include <stdio.h>
#include "local_add_int.h"
#include "local_add_double.h"
#include "local_add.h"

int add_int(int a, int b)
{
    printf("hello add_int!\n");
    int c = local_add_int(a, b);
    printf("end add_int!\n");
    return c;
}

double add_double(double a, double b)
{
    printf("hello add_double!\n");
    double d = local_add_double(a, b);
    printf("end add_double!\n");
    return d;
}
