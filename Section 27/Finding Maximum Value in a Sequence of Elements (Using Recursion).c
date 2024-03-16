#include <stdio.h>

// Finding the Maximum value in a sequence of elements using recursion

int findMax(int num)
{
    int maxSoFar;
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    if (num > 1)
    {
        maxSoFar = findMax(num - 1);
        if (userInput > maxSoFar)
        {
            return userInput;
        }
        else
        {
            return maxSoFar;
        }
    }
    return userInput;
}

int main()
{
    int num = 3;
    printf("The maximum is %d\n", findMax(num));
    return 0;
}