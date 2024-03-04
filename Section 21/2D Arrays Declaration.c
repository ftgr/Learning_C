#include <stdio.h>

int main()
{
    int myArray[2][3];
    myArray[0][0] = 1;
    myArray[0][1] = 2;
    myArray[0][2] = 3;
    myArray[1][0] = 4;
    myArray[1][1] = 5;
    myArray[1][2] = 6;
    printf("%d %d %d\n", myArray[0][0], myArray[0][1], myArray[0][2]);
    printf("%d %d %d\n", myArray[1][0], myArray[1][1], myArray[1][2]);
    return 0;
}