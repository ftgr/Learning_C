#include <stdio.h>
int main()
{
    int num, i, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0;

    for (i =1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("The total sum is: %d\n", sum);
    return 0;
}