#include <stdio.h>

int isOdd(int num)
{
    if (num % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isOdd(num) == 1)
    {
        printf("%d is an odd number\n", num);
    }
    else
    {
        printf("%d is an even number\n", num);
    }
    return 0;
}