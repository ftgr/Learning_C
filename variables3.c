#include <stdio.h>

int main () {
    int year;
    int age;

    printf("Please enter the current year:\n");
    scanf("%d", &year);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("You were born in %d\n", year - age);
    return 0;
}