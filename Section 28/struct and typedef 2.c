#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} Date;

void printDate(Date date)
{
    printf("Day: %d\n", date.day);
    printf("Month: %d\n", date.month);
    printf("Year: %d\n", date.year);
}

Date getDate()
{
    Date date;
    printf("Enter day: ");
    scanf("%d", &date.day);
    printf("Enter month: ");
    scanf("%d", &date.month);
    printf("Enter year: ");
    scanf("%d", &date.year);
    return date;
}

int main()
{
    Date date = getDate();
    printDate(date);
    return 0;
}