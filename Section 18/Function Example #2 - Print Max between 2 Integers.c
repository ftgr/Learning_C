#include <stdio.h>

double findMax(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("The maximum is %.2lf\n", findMax(a, b));
    return 0;
}