#include <stdio.h>

double findAvg(double a, double b, double c)
{
    return (a + b + c) / 3;
}

int main()
{
    printf("Enter three numbers: ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("The average is %.2lf\n", findAvg(a, b, c));
    return 0;
}