#include <stdio.h>
int main()
{
    int number, i, sum = 0, sum2 = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (i % 3 == 0 || i % 5 ==0)
        {
            printf("%d is divisible either by 3 or 5\n", i);
            sum = sum + i;
        }
        
    }
    printf("The trivial solutions is: sum = %d\n", sum);

    // Optimezed solution
    for (i =3; i <= number; i = i + 3)
    {
        sum2 = sum2 + i;
    }
    for (i = 5; i <= number; i = i + 5)
    {
        if (i % 3 != 0)
        {
            sum2 = sum2 + i;
        }
    }
    printf("Optimezed solution: sum = %d\n", sum2);
    return 0;
}