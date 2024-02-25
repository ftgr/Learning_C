#include <stdio.h>
// #include <math.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("Enter an integer number: ");
    scanf("%d", &a);
    printf("The absolute value of %d is %d\n", a, abs(a));
    return 0;
}