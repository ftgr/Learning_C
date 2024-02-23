#include <stdio.h>
int main()
{
    int a, b, c;
    double average;
    printf("Avearge Calculator!!!!\n");
    printf("Please enter the first grade: ");
    scanf("%d", &a);
    printf("Please enter the second grade: ");
    scanf("%d", &b);
    printf("Please enter the third grade: ");
    scanf("%d", &c);
    average = (a + b + c) / (double)3;
    printf("Your average grande is %.2lf\n", average);
    return 0;
}