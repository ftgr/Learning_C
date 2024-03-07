#include <stdio.h>

int stringLength(char *str);

int main()
{
    char name[30];
    int size;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    size = stringLength(name);
    printf("Your name has %d characters.\n", size);

    return 0;
}

int stringLength(char *str){
    return strlen(str);
}