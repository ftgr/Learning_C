#include <stdio.h>
int main()
{
    int number, i;
    printf("Up to what even natural numbers greater than two do you want to see? ");
    scanf("%d", &number);

    for (i = 3; i <= number; i++)
    {
        if ( i % 2 == 0 )
        {
            printf("%d ", i);
        }
        
    }
    printf("\n");
    

    return 0;
}