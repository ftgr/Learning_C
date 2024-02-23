#include <stdio.h>
int main()
{
    int grade1;
    int grade2;

    // Get the input from the user
    printf("Please enter a grade\n");
    scanf("%d", &grade1);
    printf("Please enter another grade\n");
    scanf("%d", &grade2);
    printf("Average grade: %d\n", (grade1 + grade2)/2);
    return 0;
}