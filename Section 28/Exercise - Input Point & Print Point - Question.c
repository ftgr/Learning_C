#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

void printPoint(Point p)
{
    printf("(%d, %d)\n", p.x, p.y);
}

Point readPoint()
{
    Point p;
    printf("Enter the x point: ");
    scanf("%d", &p.x);
    printf("Enter the y point: ");
    scanf("%d", &p.y);
    return p;
}

int main()
{
    Point p = readPoint();
    printPoint(p);

    return 0;
}