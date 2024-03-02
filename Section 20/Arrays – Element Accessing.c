#include <stdio.h>
int main()
{
    int testArray[5] = {11, 22, 43, 14, 65};

    int firstElement = testArray[0];
    printf("First Element: %d\n", firstElement);

    int secondElement = testArray[1];
    printf("Second Element: %d\n", secondElement);

    int lastElement = testArray[4];
    printf("Last Element: %d\n", lastElement);

    // Modifying an array element
    testArray[0] = 100;
    printf("Now, First Element is: %d\n", testArray[0]);

    testArray[4] = 200;
    printf("Now, Last Element is: %d\n", testArray[4]);


    int grades[5];
    int i;
    int lowestGrade;
    for (i = 0; i < 5; i++)
    {
        printf("Enter grade: ");
        scanf("%d", &grades[i]);    
    }

    lowestGrade = grades[0];

    for (i=0; i < 5; i++)
    {
        if (grades[i] < lowestGrade)
        {
            lowestGrade = grades[i];
        }
    }

    printf("Lowest Grade: %d\n", lowestGrade);

    return 0;
}