#include <stdio.h>

// Finding the Minimum value in a sequence of elements using recursion

int findMin(int num)
{
    int minSoFar;
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    if (num > 1)
    {
        minSoFar = findMin(num - 1);
        if (userInput < minSoFar)
        {
            return userInput;
        }
        else
        {
            return minSoFar;
        }
    }
    return userInput;
}

int main()
{
    int num = 3;
    printf("The minimum is %d\n", findMin(num));
    return 0;
}