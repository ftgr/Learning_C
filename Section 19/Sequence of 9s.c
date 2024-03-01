#include <stdio.h>

unsigned long long nineNumber(unsigned long long lenght) // Works up to 19 
{
    int i;
    unsigned long long num = 0;
    if (lenght >= 0)
    {
        for (i = 0; i < lenght; i++)
        {
            num = num * 10 + 9;
        }
        return num;
    }
    else
    {
        return 1;
    }
}

int main()
{
    unsigned long long num;
    printf("Enter the length of the sequence: ");
    scanf("%llu", &num);
    if (nineNumber(num) != 1)
    {
        printf("%llu\n", nineNumber(num));
    }
    else
    {
        printf("Enter a positive integer\n");
    }
    return 0;
}