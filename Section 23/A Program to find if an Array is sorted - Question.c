#include <stdio.h>

// Write a program that checks if an array is sorted
// The user should input the values

#define SIZE 5

int main(){
    int array[SIZE];
    int i;
    int flag = 1;
    printf("Please enter an integer value for the array\n");
    for (i = 0; i < SIZE; i++){
        scanf("%d", &array[i]);
    }
    for (i = 0; i < SIZE - 1; i++){
        if (array[i] > array[i + 1]){
            flag = 0;
            break;
        }
    }

    if (flag){
        printf("The array is sorted\n");
    }
    else{
        printf("The array is not sorted\n");
    }
    return 0;
}