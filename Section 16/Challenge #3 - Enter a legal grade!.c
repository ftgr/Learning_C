#include <stdio.h>
int main()
{
    float grade;
    do
    {
        printf("Enter a valid grade: ");
        scanf("%f", &grade);
        if (grade > 0 && grade < 100)
        {
            printf("%.2f is a valid grade\n", grade);
        }
        else
        {
            printf("%.2f is not a valid grade\n", grade);
        }
        
    } while (grade != 0);
    
    return 0;
}