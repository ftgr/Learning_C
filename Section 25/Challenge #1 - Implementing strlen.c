#include <stdio.h>

int strlen2(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

int main() {

  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  printf("%d", strlen2(str));

  return 0;
}
