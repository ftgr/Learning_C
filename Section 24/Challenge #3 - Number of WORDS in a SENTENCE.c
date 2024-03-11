#include "stdio.h"

int main(int argc, char *argv[]) {
  char sentence[100];
  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);

  int wordcount = 0;
  int i = 0;
  while (sentence[i] != '\0') {
    if (sentence[i] == ' ' || sentence[i] == '\n') {
      wordcount++;
    }
    i++;
  }
  printf("Number of words: %d\n", wordcount);
  return 0;
}
