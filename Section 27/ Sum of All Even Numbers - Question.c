// Write a recursive function that sums up all even numbers in a sequence
// entered by the user until -1 is entered
// .
//
// #include <stdio.h>
//
// int sumOfEvens() {
//   int inputUser;
//     int sum = 0;
//   printf("Please enter a number: ");
//   scanf("%d", &inputUser);
//   if (inputUser == -1) {
//     return 0;
//   }
//   if (inputUser % 2 == 0) {
//     return inputUser + sumOfEvens();
//   }
//   return sumOfEvens();
// }
//
// int main() {
//
//   printf("Sum of all even numbers is %d\n", sumOfEvens());
//   return 0;
// }

#include <stdio.h>

// Recursive function to sum up even numbers
int sumEven(int currentSum) {
  int num;
  scanf("%d", &num);

  // Base case: if the input is -1, return the current sum
  if (num == -1)
    return currentSum;

  // If the number is even, add it to the current sum
  if (num % 2 == 0)
    currentSum += num;

  // Recursive call to continue summing
  return sumEven(currentSum);
}

int main() {
  printf("Enter a sequence of numbers. Enter -1 to end.\n");
  int result = sumEven(0);
  printf("Sum of even numbers: %d\n", result);
  return 0;
}
