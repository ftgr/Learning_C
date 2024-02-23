#include <stdio.h>
int main()
{
    double height, width, perimeter;
    printf("Please enter a rectangle height\n");
    scanf("%lf", &height);
    printf("Please enter a rectangle width\n");
    scanf("%lf", &width);
    perimeter = 2*height + 2*width;
    printf("The rectangle perimeter is %.2lf\n", perimeter);
    return 0;
}