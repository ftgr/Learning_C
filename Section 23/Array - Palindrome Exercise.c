#include <stdio.h>
// Write a program that checks if a given array is a palidrome

#define SIZE  5

int main(){

    // int array[SIZE] = {1, 2, 3, 2, 1};
    int array[SIZE] = {1, 4, 6, 2, 1};
    int i;
    int flag = 1;
    for (i = 0; i < SIZE/2; i++){
        if (array[i] != array[SIZE - 1 - i]){
            flag = 0;
            break;
        }
    }
    if (flag){
        printf("The array is palidrome\n");
    }
    else{
        printf("The array is not palidrome\n");
    }
}