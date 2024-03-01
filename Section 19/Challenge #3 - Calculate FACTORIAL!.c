#include <stdio.h>

int factorial(int number)
{
    int i, fact = 1;
    for (i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("The factorial of %d is %d\n", number, factorial(number));
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}