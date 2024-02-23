#include <stdio.h>
int main()
{
    // Write a program that calculates and prints an (the n-th term of arithmetic progression)
    // Sequence: 1,3,4,...,an
    // The sequence has 9 elements
    int a1 = 1;
    int n = 9;
    int distance = 2;
    int an;

    // an = ai + (n - 1) * distance
    an = a1 + (n - 1) * distance;
    printf("The n-th element of the sequence is %d\n", an);
    return 0;
}