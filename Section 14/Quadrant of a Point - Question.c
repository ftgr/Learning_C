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
    else if (x > 0 && y < 0)
    {
        printf("Fourth quadrant\n");
    }
    else {
        printf("Point loated at origin (0,0)\n"); 
    }
    
    
    
    return 0;
}