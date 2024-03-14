#include <stdio.h>

void printOneToN(int n) {
  if (n >= 1) {
    printOneToN(n - 1);
    printf("%d ", n);
  }
}
int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printOneToN(number);
  return 0;
}
