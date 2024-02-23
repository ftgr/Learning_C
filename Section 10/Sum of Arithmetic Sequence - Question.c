#include <stdio.h>
int main()
{
    // Write a program that calculates and prints Sn (Sum of the sequence)
    // Sn = (a1 +an) * n/2 -> Sum of Arithmetic Sequence
    float a1, distance, an;
    int n;
    printf("Welcome to the sum of arithmetic sequences\n");
    printf("Please enter the first term of the sequence: ");
    scanf("%f", &a1);
    printf("Please enter the distance of of the sequence: ");
    scanf("%f", &distance);
    printf("Please enter the number of elements of the sequence: ");
    scanf("%d", &n);
    printf("Please enter the the n-th element of the sequence: ");
    scanf("%f", &an);
    printf("The sum of the elements of the arithmetic sequence is: %.2f\n", (a1 + an)* n/2);
    return 0;
}