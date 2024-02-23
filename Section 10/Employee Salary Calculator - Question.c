#include <stdio.h>
int main()
{
    // Write a program that receives:
    // 1. Salary (per hours)
    // 2. Total hours worked (in a month)
    // The program should caculate a print the total monthly salary of the employee
    float hourlyRate, TotalHoursWorked, salary;
    printf("Welcome to the Salary Calculator!!!!");
    printf("Please enter the hourly rate: ");
    scanf("%f", &hourlyRate);
    printf("Please enter the total hours worked: ");
    scanf("%f", &TotalHoursWorked);
    salary = hourlyRate * TotalHoursWorked;
    printf("The employee salary is: %.2f\n", salary);
    return 0;
}