#include <stdio.h>
int main()
{
    double height, width;
    printf("Please enter the rectangle heigh\n");
    scanf("%lf", &height);
    printf("Please enter the rectangle width\n");
    scanf("%lf", &width);
    printf("The total rectange area is %.2lf\n", height * width);
    return 0;
}