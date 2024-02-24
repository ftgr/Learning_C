#include <stdio.h>
#include <math.h>

int main()
{
    int number, x2, x4, x6,x8;
    printf("Please enter an integer number: ");
    scanf("%d",&number);

    x2 = pow(number, 2);
    x4 = pow(number, 4);
    x6 = pow(number, 6);
    x8 = pow(number, 8);

    printf("%d^2 = %d\n", number, x2);
    printf("%d^4 = %d\n", number, x4);
    printf("%d^6 = %d\n", number, x6);
    printf("%d^8 = %d\n", number, x8);
    return 0;
}