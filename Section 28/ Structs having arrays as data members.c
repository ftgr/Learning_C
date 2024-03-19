#include <stdio.h>

typedef struct employee
{
 char name[15];
 int age;
 int id;       
}Employee;

int main(){
    Employee emp1;
    Employee emp2 = {"Bill Clinton", 30, 123};

    // Using the "=" to copy "value-by-value" (the members of one struct variable to another of the same way)
    //note: copying static arrays in assignment between two structs variables is a little different than simply copying an array (element by element) -> remember that we cannot copy an array in assignment -> array1 = array2 -> we need to use a loop
    emp1 = emp2;
    printf("Employee #1 name is %s\n", emp1.name);
    printf("Employee #1 age is %d\n", emp1.age);
    printf("Employee #1 id is %d\n", emp1.id);
    printf("Employee #2 name is %s\n", emp2.name);
    printf("Employee #2 age is %d\n", emp2.age);
    printf("Employee #2 id is %d\n", emp2.id);
    printf("Address of employee #1 is %p\n", &emp1);
    printf("Address of employee #2 is %p\n", &emp2);
    return 0; 
}