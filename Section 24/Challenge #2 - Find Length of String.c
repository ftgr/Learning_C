#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s!\n", name);
    printf("Your name has %d characters.\n", strlen(name));

    int nameSizeof = sizeof(name);
    int nameSize = strlen(name);
    printf("%d\n", nameSizeof);
    printf("%d\n", nameSize);

    return 0;
}