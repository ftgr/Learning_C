#include <stdio.h>

// lesson: initializing a struct
typedef struct point {
	int x;
	int y;
}point;

int main()
{
	// declaring a "point" variable (without initialization)
	point p1; // holds garbage values

	// initializing a "point" variable (members in order)
	point p2 = { 5, 7 };// x = 5, y = 7

	// using designated initializer
	point p3 = { .x = 3, .y = 4 };// x = 3, y = 4
	
	// using designated initializer (out of order)
	point p4 = { .y = 10, .x = 2 }; // x = 2, y = 10

	// designated initializer (other members are initialized with 0)
	point p5 = { .x = 1 }; // x = 1, y = 0
}
