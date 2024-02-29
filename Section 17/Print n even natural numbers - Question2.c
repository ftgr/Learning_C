#include <stdio.h>
int main()
{
    int number, i, counter;
    printf("How many even natural numbers greater than two do you want to see? ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        printf("%d ", i*2);
    }
    printf("\n");

    return 0;
}