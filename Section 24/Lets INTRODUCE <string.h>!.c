#include <stdio.h>
#include <string.h>

int main()
{
    // strlen() -> return the number of character in a string excluding the null character \0 at the end
    char name[5] = "Vlad";
    printf("%s\n", name); // Vlad
    printf("%d\n", strlen(name)); // 4
    
    // strcpy() -> copy string
    char name2[20];
    // strcpy(destinatino, original)
    strcpy(name2, name);
    printf("%s\n", name2); // Vlad

    //strcat(first_string, second_string) -> concatenate string
    //Make sure that the first string has enough space/size to hold the second string
    char name3[20] = "Hello ";
    strcat(name3, name);
    printf("%s\n", name3);

    //strcmp() -> compare two strings
    // 0 -> they are the same
    // -1 -> first string is smaller
    // 1 -> first string is bigger
    int result = strcmp(name, name2);
    printf("%d\n", result); //0 -> they are the same

    return 0;
}