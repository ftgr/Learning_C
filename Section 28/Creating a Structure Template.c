#include <stdio.h>
#include <string.h>

int main(){
    struct Employee{
        char name[100];
        int age;
        int id;
        float salary;
    };

    struct Employee emp;
   // emp.name = "Bill Clinton";
   strcpy(emp.name, "Bill Clinton");
    emp.age = 30;
    emp.id = 123;
    emp.salary = 50000.00;

    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    return 0;
}