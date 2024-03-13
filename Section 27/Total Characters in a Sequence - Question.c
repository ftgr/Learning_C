// We have to write a recursive function that will calculate the number of
// appearances of a give character in a sequence provided by the user. To $
// character signals the end of the sequence. Return the total number of
// occurences of the character in the sequence.
//
#include <stdio.h>

int totalChar(char c) {
  char inputUser;
  printf("Enter a character: ");
  scanf("%c", &inputUser);
  getchar();
  if (inputUser == '$') {
    return 0;
  }
  if (inputUser == c) {
    return 1 + totalChar(c);
  }
  return totalChar(c);
}

int main() {
  char c[1] = "c";
  printf("Total number of %c is %d\n", c[0], totalChar(c[0]));

  return 0;
}
