#include <stdio.h>

union Info
{
    char firstname[20];
    int age;
    float salary;
};

int main(){
    // Creating a union variable
    union Info person;

    printf("Enter your name: ");
    scanf("%s", person.firstname);
    printf("Enter your age: ");
    scanf("%d", &person.age);
    printf("Enter your salary: ");
    scanf("%f", &person.salary);
    printf("Name: %s\n", person.firstname); // Prints an empty string -> because the union variable can only hold one value at a time
    printf("Age: %d\n", person.age); // Again, prints garbage
    printf("Salary: %.2f\n", person.salary); // Prints the salary

    return 0;}