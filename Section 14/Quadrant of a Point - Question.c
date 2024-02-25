#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the x coordinate: ");
    scanf("%f", &x);
    printf("Enter the y coordinate: ");
    scanf("%f", &y);
    if (x > 0 && y > 0)
    {
        printf("First quadrant\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Second quadrant\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Third quadrant\n");
    }
    else {
        printf("Fourth quadrant\n");
    }
    
    
    
    return 0;
}