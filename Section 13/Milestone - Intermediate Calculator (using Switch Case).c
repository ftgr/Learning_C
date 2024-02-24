// #include <stdio.h>
// int main()
// {
//     float x, y;
//     char operator;
//     printf("Welcome to the Calculator!\n");
//     printf("Please enter a number: ");
//     scanf("%f", &x);
//     printf("Please enter another number: ");
//     scanf("%f", &y);
//     printf("Please enter an operator: ");
//     scanf("%c", &operator);
//     switch (operator)
//     {
//     case '+':
//         printf("%f + %f = %.2f", x, y, x + y);
//         break;
//     case '-':
//         printf("%f - %f = %.2f", x, y, x - y);
//         break;
//     case '*':
//         printf("%f * %f = %.2f", x, y, x * y);
//         break;
//     case '/':
//         if (y != 0)
//         {
//             printf("%f + %f = %.2f", x, y, x / y);
//         }
//         else{
//             printf("Cannot divide by zero\n");
//         }        
//         break;
//     default:
//         printf("Something went wrong! Try again!\n");
//         break;
//     }
//     return 0;
// }
//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int num1, num2;
    char mathOperation;
    printf("Enter what math operation you would like to use : ('+', '-', ..): ");
    scanf("%c", &mathOperation);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    switch (mathOperation)
    {
    case '+':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 + num2);
        break;
    case '-':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 - num2);
        break;
    case '*':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 / num2);
        break;
    case '%':
        if (num2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 % num2);
        break;
    default:
        printf("Wrong mathematical operation.. Try again. \n");
        break;
    }
}