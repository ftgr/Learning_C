#include <stdio.h>
int main()
{
    int myArray[3] = {1, 2, 2000};
    int myArray2[3];


    // Copying the array
    for (int i = 0; i < 3; i++){
        myArray2[i] = myArray[i];
    }
    // Printing the array
    for (int i = 0; i < 3; i++){
        printf("Original Array: %d\n", myArray[i]);
    }
    for (int i = 0; i < 3; i++){
        printf("Copyied Array : %d\n", myArray2[i]);
    }
    return 0;
}