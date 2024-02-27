#include <stdio.h>
int main()
{
    char charecter;
    printf("Enter a character in Hexadecimal format: ");
    scanf("%x", &charecter);

    printf("0x%x = %b\n", charecter, charecter);

    return 0;
}
