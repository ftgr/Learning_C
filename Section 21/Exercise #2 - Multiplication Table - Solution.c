#include <stdio.h>

#define SIZE 11

int main()
{
    int table[SIZE][SIZE];
    int i, j;

    // Step 1 - Fill the values in the table
    for (i = 1; i < SIZE; i++){
        for (j = 1; j < SIZE; j++){
            table[i][j] = i * j;
        }
    }

    // Step 2 - Printing the multicaplication table
    for (i = 1; i < SIZE; i++){
        for (j = 1; j < SIZE; j++){
            printf("%5d", table[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
