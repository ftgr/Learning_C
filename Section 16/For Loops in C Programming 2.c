#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i = i + 2) // 1 2 3
    {
       printf("%d ", i);
    }
    
    return 0;
}