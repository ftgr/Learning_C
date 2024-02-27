#include <stdio.h>
int main()
{
    float grade, sumOfGrades;
    int counter = -1;
    sumOfGrades = 0;

    while (grade != -1)
    {
        printf("Enter a grade! Type -1 to evaluate the average grade: ");
        scanf("%f", &grade);
        sumOfGrades = sumOfGrades + grade;
        printf("%.2f\n", sumOfGrades);
        counter++;
        printf("%d\n", counter);
    }
    printf("The average grade is %.2f\n", sumOfGrades/counter);    
    
    return 0;
}
