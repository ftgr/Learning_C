#include <stdio.h>
int main()
{
    float a = 10.0;
    float b = 20.0;
    float temp;
    printf("a = %.2f, b = %.2f\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %.2f, b = %.2f\n", a, b);
    return 0;
}