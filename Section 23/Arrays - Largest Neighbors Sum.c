#include <stdio.h>

// Write a program that calculates and prints the largest neighbor sum of an array

#define SIZE 10
int main(){
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    int max = array[0] + array[1];
    for (i = 0; i < SIZE - 1; i++){
        if (array[i] + array[i + 1] > max){
            max = array[i] + array[i + 1];
        }
    }
    printf("The largest neighbor sum is %d\n", max);
    return 0;

}