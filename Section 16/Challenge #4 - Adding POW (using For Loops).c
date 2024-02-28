#include <stdio.h>
int main()
{
    float number, result;
    int power, i;
    printf("Enter a number: ");
    scanf("%f", &number);
    printf("Enter a power: ");
    scanf("%d", &power);

    result = 1;

    if (power == 0)
    {
        printf("%f^%d = 1\n", number, power);
    }
    else
    {
    for (i = 1; i <= power; i++)
    {
        result = result * number;
    }
    }
    printf("%f^%d = %.2f\n", number, power, result);

    return 0;
}