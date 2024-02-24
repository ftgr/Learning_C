#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, distance;
    printf("Welcome to the distance point calculator");
    printf("Please enter the coordinates X1: ");
    scanf("%f", &x1);
    printf("Please enter the coordinates Y1: ");
    scanf("%f", &y1);
    printf("Please enter the coordinates X2: ");
    scanf("%f", &x2);
    printf("Please enter the coordinates Y2: ");
    scanf("%f", &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y1 - y2, 2));
    printf("The distance between the coordinates (%f, %f) and (%f, %f) is: %.2f\n",x1, y1, x2, y2, distance);
    return 0;
}
