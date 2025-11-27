#include <stdio.h>

int main() {
  // The number of asterisks is fixed at 13 in this specific pattern.
  int num_asterisks = 13;
  
  // A single for loop is sufficient to print the fixed pattern.
  for (int i = 0; i < num_asterisks; i++) {
    printf("* ");
  }
  
  // Add a newline character at the end.
  printf("\n");
  
  return 0;
}
