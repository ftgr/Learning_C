#include <stdio.h>

// Write a recursive function that receives a integer naumber and return the sum
// of its arithmetic progression
// eg.

int sum(int num) {
  if (num == 1)
    return 1;
  return num + sum(num - 1);
}

int main() {
  printf("Enter a natural number > 0: ");
  int num;
  scanf("%d", &num);
  printf("Sum: %d\n", sum(num));

  return 0;
}
