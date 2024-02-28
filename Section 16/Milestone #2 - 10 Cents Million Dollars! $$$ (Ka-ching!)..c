#include <stdio.h>
int main()
{
    int cent = 1;
    int total = 1;
    int i;
    for (i = 1; i <=30; i++)
    {
        total = total * 2;
        // printf("%d\n", total);
    }
    printf("1 cent for 30 days = %d\n", total/100);
    return 0;
}