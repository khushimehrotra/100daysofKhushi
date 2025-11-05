#include <stdio.h>

int main() {
  int rows = 5; // The number of rows in the pattern

  // Outer loop iterates through each row
  for (int i = 1; i <= rows; i++) {
    // Inner loop prints asterisks for the current row
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    // Moves to the next line after each row is printed
    printf("\n");
  }
  return 0;
}
