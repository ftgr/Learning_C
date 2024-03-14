#include <stdio.h>

int lucas(int n) {
  if (n == 0) {
    return 2;
  }
  if (n == 1) {
    return 1;
  }
  return lucas(n - 1) + lucas(n - 2);
}

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Lucas number %d is %d\n", number, lucas(number));
  return 0;
}
