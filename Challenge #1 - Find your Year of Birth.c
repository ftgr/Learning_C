#include <stdio.h>

int main ()
{
    int age;
    int currentYear;

    printf("Please enter your age\n");
    scanf("%d", &age);
    printf("Please enter the current year\n");
    scanf("%d", &currentYear);
    printf("You were born in %d\n", currentYear - age);
    return 0;
}