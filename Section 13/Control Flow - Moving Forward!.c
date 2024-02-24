#include <stdio.h>
int main()
{
    int grade;
    printf("Please enter grade: ");
    scanf("%d", &grade);
    if (grade >= 80)
    {
        printf("Excelent job\n");
    }
    else if (grade < 80 && grade >= 60)
    {
        printf("Not bad\n");
    }
    else {
        printf("Oh... You didn't pass\n");
    }
    return 0;
}