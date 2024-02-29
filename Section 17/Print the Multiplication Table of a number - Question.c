#include <stdio.h>
int main()
{
    int number, iterations, i;
    printf("Enter a number to calculate its times table: ");
    scanf("%d", &number);
    printf("Enter the number of iterations to calculate its times table: ");
    scanf("%d", &iterations);

    for ( i = 1; i <= iterations; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}