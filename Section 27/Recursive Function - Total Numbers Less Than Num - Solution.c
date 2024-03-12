#include <stdio.h>

int totalSmaller(int num) {
  int inputUser;
  printf("Enter a number: ");
  scanf("%d", &inputUser);
  if (inputUser == -1) {
    return 0;
  }
  if (inputUser < num) {
    return 1 + totalSmaller(inputUser);
  }
  return totalSmaller(inputUser);
}

int main() {
  int num;
  printf("Enter a reference number: ");
  scanf("%d", &num);
  printf("Total numbers less than %d is %d\n", num, totalSmaller(num));
  return 0;
}
