#include <stdio.h>

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
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
    printf("Lowercase of %c is %c\n", charecter, toLower(charecter));
    return 0;
}