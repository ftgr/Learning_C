#include <stdio.h>
int main()
{
    float grade;
    printf("Please enter your grade: ");
    scanf("%f", &grade);
    if (grade >= 69)
        printf("Congratulations!\n");
    else
        printf("Failed!\n");
    return 0;
}