#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

void greet(){
    printf("Hello, World!\n");
}

int main()
{
    int a = 10, b = 20;
    printf("The sum of %d and %d is %d\n", a, b, sum(a, b));

    greet();

    return 0;
}

