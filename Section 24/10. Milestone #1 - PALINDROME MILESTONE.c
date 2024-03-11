#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
  int left = 0;
  int right = strlen(str) - 1;

  // Check characters from the two ends towards the center
  while (left < right) {
    if (str[left] != str[right]) {
      return 0; // Not a palindrome
    }
    left++;
    right--;
  }

  return 1; // Palindrome
}

int main() {
  char input[100];

  // Input from the user
  printf("Enter a string: ");
  scanf("%s", input);

  // Check if the entered string is a palindrome
  if (isPalindrome(input)) {
    printf("%s is a palindrome.\n", input);
  } else {
    printf("%s is not a palindrome.\n", input);
  }

  return 0;
}
