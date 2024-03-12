#include <stdio.h>

int sumOfDigits(int num) {
  if (num <= 9)
    return num;
  return num % 10 + sumOfDigits(num / 10);
}

int main() {
  printf("Enter a number > 0: ");
  int num;
  scanf("%d", &num);
  printf("Sum of digits: %d\n", sumOfDigits(num));
  return 0;
}
