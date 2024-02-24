#include <stdio.h>
int main()
{
    float number1, number2;
    printf("Please enter a floating point number: ");
    scanf("%f", &number1);
    printf("Please enter another floating point number: ");
    scanf("%f", &number2);
    if (number1 > number2){
        printf("Maximum = %f\n", number1);
        printf("Minumum = %f\n", number2);
    }
    else if (number1 < number2){
        printf("Maximum = %f\n", number2);
        printf("Minumum = %f\n", number1);
    }
    else {
        printf("%f = %f\n", number1, number2);
    }
    return 0;
}