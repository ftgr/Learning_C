#include <stdio.h>
int main()
{
    float a, b;
    printf("Please enter a number: ");
    scanf("%f", &a);
    printf("Enter another number: ");
    scanf("%f", &b);
    if (a == b) 
    {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    
    return 0;
}