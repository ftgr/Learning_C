#include <stdio.h>

int findMaxDigit(int number)
{
    int a, b;
    a = number % 10;
    b = number / 10; // an integer divided by another integer returns an integer
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int number;
    printf("Enter a 2-digit number: ");
    scanf("%d", &number);
    if (number >= 0 && number <= 99)
    {
    printf("The maximum digit in %d is %d\n", number, findMaxDigit(number));
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}