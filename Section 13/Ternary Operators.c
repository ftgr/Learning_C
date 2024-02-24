#include <stdio.h>
int main()
{
    float number1, number2, min, max;

    // Using if else statements
    if  (number1 > number2){
        min = number2;
    }
    else {
        min = number1;
    }
    // Using a ternanry operator
    min = (number1 > number2) ? number2 : number1;
    return 0;
}