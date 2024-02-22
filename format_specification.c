#include <stdio.h>

int main(){
    printf("I am %d years old\n", 40);
    printf("Today I am %d years old and next year I'm going to be %d years old\n", 49, 50);
    printf("My average grade: %f\n", 90.35);
    // Formatting the output to 2 decimal points
    printf("My average grade: %.2f\n", 90.35);

    printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);

    printf("5 + 2 = %d\n", 5+2);
    printf("5 - 2 = %d\n", 5-2);
    printf("5 * 2 = %d\n", 5*2);
    printf("5 / 2 = %.2f\n", 5/2);
    printf("5 % 2 = %d\n", 5%2);
    return 0;
}