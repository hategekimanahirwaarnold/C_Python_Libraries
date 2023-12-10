#include "factorial_extension.h"
#include <stdio.h>

int calculate_factorial(int a)
{
    int fact = 1;
    while(a > 0)
    {
        fact *= a;
        a--;
    }
    return fact;
}
