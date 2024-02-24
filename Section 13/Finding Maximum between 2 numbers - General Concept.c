#include <stdio.h>
int main()
{
    float number1, number2;
    printf("Enter a number: ");
    scanf("%f", &number1);
    printf("Please enter another number: ");
    scanf("%f", &number2);
    if (number1 > number2) {
        printf("%.2f is greater than %f\n", number1, number2);
    }
    else if (number2 > number1) {
        printf("%.2f is greater than %f\n", number2, number1);
    }
    else {
        printf("%.2f is equal to %.2f\n", number1, number2);
    }
    return 0;
}
