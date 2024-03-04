#include <stdio.h>
int main()
{
    // Standard 2D array initialization
    int myArray[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d %d %d\n", myArray[0][0], myArray[0][1], myArray[0][2]);
    printf("%d %d %d\n", myArray[1][0], myArray[1][1], myArray[1][2]);

    printf("\n");

    // Incomplete values in the internal curly brackets
    // Any missing values will be filled up with 0
    int myArray2[2][3] = {{5 , 6}, {7}};
    printf("%d %d %d\n", myArray2[0][0], myArray2[0][1], myArray2[0][2]);
    printf("%d %d %d\n", myArray2[1][0], myArray2[1][1], myArray2[1][2]);

    printf("\n");

    // Excessively values in the internal curly brackets
    int myArray3[2][3] = {5,2,1,6,5}; // It starts filling up the array from the first row and column, then goes one until it reaches the end of the row, then it goes to the next row and so on.
    printf("%d %d %d\n", myArray3[0][0], myArray3[0][1], myArray3[0][2]);
    printf("%d %d %d\n", myArray3[1][0], myArray3[1][1], myArray3[1][2]);

    return 0;
}