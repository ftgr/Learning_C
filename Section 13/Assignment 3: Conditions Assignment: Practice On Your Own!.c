#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Print another number: ");
    scanf("%d",&b);
    if (a == b) {
        printf("Equals\n");
    }
    else {
        printf("Not equal\n");
    }
    return 0;
}