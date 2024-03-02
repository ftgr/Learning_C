#include <stdio.h>

#define SIZE 7 // Size of the array for a week data of the weather station

int main()
{
    float arr[SIZE];
    float sumOfTemperatures, averageTemperature, hotestDay, coldestDay;
    int i, indexOfHotestDay, indexOfColdestDay;

    // Taking input from the user
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter temperature in order from Sunday to Saturday: ");
        scanf("%f", &arr[i]);
    }

    // Calculating the sum of temperatures
    sumOfTemperatures = 0;
    for (i = 0; i < SIZE; i++)
    {
        sumOfTemperatures = sumOfTemperatures + arr[i];
    }

    // Calculating the average temperature
    averageTemperature = sumOfTemperatures / SIZE;
    printf("The average temperature is: %.2f\n", averageTemperature);

    // Calculation the hotest day
    hotestDay = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > hotestDay)
        {
            hotestDay = arr[i];
            indexOfHotestDay = i;
        }
    }
    switch (indexOfHotestDay)
    {
    case 0:
        printf("The hotest day was Sunday. With temperature: %.2f\n", hotestDay);
        break;
    case 1:
        printf("The hotest day was Monday. With temperature: %.2f\n", hotestDay);
        break;
    case 2:
        printf("The hotest day was Tuesday. With temperature: %.2f\n", hotestDay);
        break;
    case 3:
        printf("The hotest day was Wednesday. With temperature: %.2f\n", hotestDay);
        break;
    case 4:
        printf("The hotest day was Thursday. With temperature: %.2f\n", hotestDay);
        break;
    case 5:
        printf("The hotest day was Friday. With temperature: %.2f\n", hotestDay);
        break;
    case 6:
        printf("The hotest day was Saturday. With temperature: %.2f\n", hotestDay);
        break;
    default:
        printf("ERROR.. Try Again! \n");
        break;
    }

    // Calculation the coldest day
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] < coldestDay)
        {
            coldestDay = arr[i];
            indexOfColdestDay = i;
        }
    }
    switch (indexOfColdestDay)
    {
    case 0:
        printf("The coldest day was Sunday. With temperature: %.2f\n", coldestDay);
        break;
    case 1:
        printf("The coldest day was Monday. With temperature: %.2f\n", coldestDay);
        break;
    case 2:
        printf("The coldest day was Tuesday. With temperature: %.2f\n", coldestDay);
        break;
    case 3:
        printf("The coldest day was Wednesday. With temperature: %.2f\n", coldestDay);
        break;
    case 4:
        printf("The coldest day was Thursday. With temperature: %.2f\n", coldestDay);
        break;
    case 5:
        printf("The coldest day was Friday. With temperature: %.2f\n", coldestDay);
        break;
    case 6:
        printf("The coldest day was Saturday. With temperature: %.2f\n", coldestDay);
        break;
    default:
        printf("ERROR.. Try Again! \n");
        break;
    }

    return 0;
}