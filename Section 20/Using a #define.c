#include <stdio.h>

#define SIZE 7

int main()
{
    int arr[SIZE];
    int i, maxIndex;

    // Taking input from the user
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    // Finding the index of the maximum value
    maxIndex = 0;
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    printf("The index of the maximum value is: %d\n", maxIndex);

    return 0;
}