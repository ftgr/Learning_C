#include <stdio.h>

// Pell sequence
// P(n) = 2 * P(n-1) + P(n-2) and base case:
// P(0) = 0
// P(1) = 1

int findPell(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    if (num > 1)
    {
        return 2 * findPell(num - 1) + findPell(num - 2);
    }
}

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The Pell number at position %d is %d\n", num, findPell(num));
    return 0;
}