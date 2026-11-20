#include <stdio.h>
#include "operations.h"

int main()
{
    int a = 20, b = 10;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division: %.2f\n", divide(a, b));

    return 0;
}
