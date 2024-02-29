#include <stdio.h>
int main()
{
    int number, i, sum, sum2;
    printf("Enter an endpoint number: ");
    scanf("%d", &number);

    sum = 0;
    sum2 = 0;

    for (i = 1; i <= number; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        { 
            sum = sum + i;
        }
        
    }
    printf("Trivial solution\n");
    printf("Sum: %d\n\n", sum);

       for (i = 15; i <= number; i  = i + 15)
    {
        printf("%d can be divided by both 3 and 5\n", i);
       sum2 = sum2 + i;  
    }
    printf("Optmized solution\nSum = %d\n", sum2);

    return 0;
}