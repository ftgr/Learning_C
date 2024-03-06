#include <stdio.h>
int main()
{
    int array[4];

    // get the input from the user
    printf("Please enter 4 integers\n");
    for (int i = 0; i < 4; i++){
        scanf("%d", &array[i]);
    }
    // Print the original array
    for (int i=0; i<4; i++){
        printf("%d\n", array[i]);
    }

    // rotate the array
    int temp = array[0];
    for (int i = 1; i < 4; i++){
        array[i - 1] = array[i];        
    }
    array[3] = temp;

    // printf('\n');
    //Print the rotated array
    for (int i=0; i<4; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}