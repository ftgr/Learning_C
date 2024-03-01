#include <stdio.h>

double calculateArea(double height, double width)
{
    return height * width;
}

int main()
{
    printf("Enter the hight and width of the rectangle: ");
    double height, width;
    scanf("%lf %lf", &height, &width);
    printf("The area of the rectangle is %.2lf\n", calculateArea(height, width));
    return 0;
}