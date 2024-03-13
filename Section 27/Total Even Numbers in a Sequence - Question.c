// We have to write a recursive function that will calculate the number of
// even numbers in a sequence provided by the user. The integeer -1 signals
// the end of the sequence. Return the total number of even numbers in the
// sequence.
//
#include <stdio.h>

int totalEven(int num) {
  int inputUser;
  printf("Enter a number: ");
  scanf("%d", &inputUser);
  if (inputUser == -1) {
    return 0;
  }
  if (inputUser % 2 == 0) {
    return 1 + totalEven(inputUser);
  }
  return totalEven(inputUser);
}

int main(int argc, char *argv[]) {
  printf("Total number of even numbers is %d\n", totalEven(0));

  return 0;
}
