#include <stdio.h>
int main()
{
    int number, evenDigitSum = 0, oddDigitSum = 0, currentDigit;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        currentDigit = number % 10;
        if (currentDigit % 2 == 0) {
            evenDigitSum = evenDigitSum + currentDigit;
        }
        else {
            oddDigitSum = oddDigitSum + currentDigit;
        }
        number /= 10;
    }

    printf("Even digit sum - odd digit sum = %d\n", evenDigitSum - oddDigitSum);

    return 0;
}