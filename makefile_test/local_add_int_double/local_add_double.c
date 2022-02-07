#include <stdio.h>
#include "local_add_double.h"

double local_add_double(double a, double b)
{
    printf("hello local_add_double!\n");
    double d = a + b;
    printf("d=%f\n", d);
    printf("end local_add_double!\n");
    return d;
}
