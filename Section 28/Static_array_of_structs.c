#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} Point;

int main()
{
    // Creating a "static array of Points"
    Point pointsArray[5]; // Each element of the array is a Point type with two integer members
    int i;

    // Reading the input fo the first point element in the array
    for (i = 0; i < 5; i++)
    {
        printf("Enter point #%d 'x' coordinate: ", i + 1);
        scanf("%d", &pointsArray[i].x);
        printf("Enter point #%d 'y' coordinate: ", i + 1);
        scanf("%d", &pointsArray[i].y);
    }
    
    // Accessing and printing all values of each element in the array
    for (i = 0; i < 5; i++)
    {
        printf("Point #%d 'x' coordinate: %d\n", i+1, pointsArray[i].x);
        printf("Point #%d 'y' coordinate: %d\n", i+1, pointsArray[i].y);
    }

    return 0;
}