#include <stdio.h>
int main()
{
    float distance, speed, time;
    printf("Welcome to the time-travel calculator!\n");
    printf("Please enter the distance between city A and B: ");
    scanf("%f", &distance);
    printf("Please enter the average speed: ");
    scanf("%f", &speed);
    time = distance / speed;
    printf("The voyage will be %.2f hours long.\n", time);
    return 0;
}