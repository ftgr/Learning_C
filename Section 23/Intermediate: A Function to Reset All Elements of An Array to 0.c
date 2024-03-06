#include <stdio.h>

void resetAllArrayValues(int *array, int size);

int main()
{
    int array[3] = {1, 3, 10};
    resetAllArrayValues(array, 3);
    for (int i = 0; i < 3; i++){
        printf("%d ", array[i]);
    }
    return 0;
}

void resetAllArrayValues(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 0;
    }
}