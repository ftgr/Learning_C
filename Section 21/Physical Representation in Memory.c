#include <stdio.h>
int main()
{
    // 1D array
    int array[5] = {1, 2, 3, 4, 5};
    printf("Element adress = %lu\n", &array[0]);
    printf("Element adress = %lu\n", &array[1]);
    printf("Element adress = %lu\n", &array[2]);
    printf("Element adress = %lu\n", &array[3]);
    printf("Element adress = %lu\n", &array[4]);

    printf("\n");

    // 2D array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Address of matrix[%d][%d] = %lu\n",i, j, matrix[i][j]);
        }
       
    }
    return 0;
}