#include <stdio.h>
int main()
{
    int a = 5, b = 2;
    double result;

    // Type casting to enforce accurate division
    // The casting is just for this operation as b will remain an int
    result = a/(double)b;
    printf("%d / %d = %lf\n", a, b, result);

    int sum;
    sum = (int)4.4 + (int) 7.4;
    printf("The sum of 4.4 and 7.4 is %d\n", sum);
    return 0;
}