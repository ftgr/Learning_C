#include <stdio.h>
#include <string.h> // so strlen() doesn't complain!

int stringLength(char *str);

int stringLenghtAlternative(char *str);

int main()
{
    char name[30];
    int size;
    int size2;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    size = stringLength(name);
    printf("Your name has %d characters.\n", size);

    size2 = stringLenghtAlternative(name);
    printf("Your name has %d characters.\n", size2);

    return 0;
}

int stringLength(char *str)
{
    return strlen(str);
}

int stringLenghtAlternative(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}