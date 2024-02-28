#include <stdio.h>
int main()
{
    int n, i, j, number;
    printf("Enter a number: ");
    scanf("%d", &n);
    number = 1;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ", number);
        }
        number++;
        printf("\n");
    }
    return 0;
}