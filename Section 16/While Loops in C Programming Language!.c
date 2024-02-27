#include <stdio.h>
int main()
{
    int count;
    printf("Enter a number: ");
    scanf("%d", &count);
    while (count > 0)
    {
        printf("*\n");
        count-- ;
    }
    
    return 0;
}