#include <stdio.h>

// Write a Recursive Fibonacci function that receives a "n" index an retruns the
// value at index "n".

int fibonacci(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  printf("Enter a number > 0: ");
  int num;
  scanf("%d", &num);
  printf("Fibonacci: %d\n", fibonacci(num));
  return 0;
}
