#include <stdio.h>

int countOfDigits(int num) {
  if (num <= 9)
    return 1;
  return 1 + countOfDigits(num / 10);
}

int main() {
  int num;
  printf("Enter a number > 0: ");
  scanf("%d", &num);
  printf("Count of digitsfor number %d: %d\n", num, countOfDigits(num));
  return 0;
}
