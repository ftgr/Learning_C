#include <stdio.h>

int sumOfDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of divisors of %d is %d\n", n, sumOfDivisors(n));
    return 0;
}