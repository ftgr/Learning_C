#include <stdio.h>
int main()
{
    int myArray[3];
    int i, maxValue;

    // Taking input from the user
    for (i = 0; i < 3; i++)
    {
        printf("Enter number: ");
        scanf("%d", &myArray[i]);
    }

    // Printing the elements of the array
    for (i = 0; i < 3; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Finding the maximum value
    maxValue = myArray[0];
    for (i = 1; i < 3; i++)
    {
        if (myArray[i] > maxValue)
        {
            maxValue = myArray[i];
        }
    }
    printf("Maximum value is: %d\n", maxValue);
    return 0;
}