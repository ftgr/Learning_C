#include <stdio.h>
int main()
{   
    // char userName[30];
    char userName2[40];
    // printf("Enter your name: ");
    // // Stores up to an empty space
    // scanf("%s", userName); 
    // printf("Hello, %s!\n", userName);

    printf("Enter your name again: ");
    // using the fgets() function
    fgets(userName2, sizeof(userName2), stdin);

    printf("Hello, %s!\n", userName2);


    return 0;
}