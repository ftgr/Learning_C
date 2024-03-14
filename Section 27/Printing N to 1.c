#include <stdio.h>

void printNtoOne(int n) {
  if (n >= 1) {
    printf("%d ", n);
    printNtoOne(n - 1);
  }
}
int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printNtoOne(number);
  return 0;
}
