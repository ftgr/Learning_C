#include <stdio.h>

int sumOfArrayElements(int *array, int size);
int main()
{
    int array[4] = {1, 2, 3, 4};
    int result;
    result = sumOfArrayElements(array, 4);
    printf("%d\n", result);
    return 0;
}

int sumOfArrayElements(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}