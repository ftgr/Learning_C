#include <stdio.h>

double findMax(double a, double b, double c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main()
{
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("The maximum is %.2lf\n", findMax(a, b, c));
    return 0;
}