#include <stdio.h>

int main()
{
    int condition;
    printf("Please enter a condition: ");
    scanf("%d", &condition);

    while (condition > 0)
    {
        printf("%d\n", condition);
        condition--;
    } 
    return 0;
}