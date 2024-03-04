#include <stdio.h>

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("First number before swap: %d\n", a);
    printf("Second number before swap: %d\n", b);
    swap(a, b); // It won't swap the values of a and b in the main function
    printf("First number after swap: %d\n", a);
    printf("Second number after swap: %d\n", b);
    return 0;
}