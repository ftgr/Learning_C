#include <stdio.h>
int main()
{
    int number;
    int units, tens, hundreds;
    printf("Please enter a three digit number: ");
    scanf("%d", &number);

    units = number % 10;
    tens = (number / 10) % 10;
    hundreds = number /  100;

    printf("The sum of the digits in %d is %d\n", number, units + tens + hundreds);
    return 0;
}
