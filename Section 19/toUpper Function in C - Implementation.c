#include <stdio.h>

char toUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char charecter;
    printf("Enter a character: ");
    scanf("%c", &charecter);
    printf("Uppercase of %c is %c\n", charecter, toUpper(charecter));
    return 0;
}