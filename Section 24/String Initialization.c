#include <stdio.h>
int main()
{
    char myString[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char myString2[] = "World!";

    printf("%s\n", myString);
    printf("%s\n", myString2);
    return 0;
}