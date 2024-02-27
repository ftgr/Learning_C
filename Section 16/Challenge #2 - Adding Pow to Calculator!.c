#include <stdio.h>
int main()
{   
    int number, power, result, counter;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a power: ");
    scanf("%d", &power);

    result = number;
    counter = power;
    while (counter > 1)
    {
        result = result * number;
        counter--;
    }
    printf("Result %d^%d = %d\n", number, power, result);
    return 0;
}