#include <stdio.h>
int main()
{
    int number;
    int reverseNumber;
    int units, tens, hundreds;
    printf("Please enter a 3-digit number: ");
    scanf("%d", &number);

    units = number % 10;
    tens = (number / 10) % 10;
    hundreds = number / 100;
// Just printing out the reverse number
    printf("The reverse of %d is %d%d%d\n", number,units,tens, hundreds);

// Using variables to create and store the reversed sequence
    reverseNumber = units;
    reverseNumber = reverseNumber * 10 + tens;
    reverseNumber = reverseNumber * 10 + hundreds;
    printf("The reverse of %d is %d\n", number, reverseNumber);
    return 0;
}
