// Print all unique elements in a array
// Count the number of Unique elements in an array

#include <stdio.h>

#define SIZE 10

int main(){
    int array[SIZE] = {8, 7, 4, 5, 6, 8, 9, 10, 3};

    int uniqueElements = 0;
    int i, j;
    int isUnique;

    for (i = 0; i < SIZE; i++){
        isUnique = 1; // Assume the element is unique
        for (j = 0; j < SIZE; j++){
            if (i != j && array[i] == array[j]){
                isUnique = 0; // Set the flag to indicate the element is not unique
                break;
            }
        }
        if (isUnique == 1){
            uniqueElements++; // There is a bug here
            printf("%d ", array[i]);
        }
    }

    printf("\n");
    printf("The number of unique elements is %d\n", uniqueElements);

    return 0; 
}