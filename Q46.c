#include <stdio.h>

int main() {
  // The outer loop controls the number of rows (5 rows in this case).
  for (int i = 0; i < 5; i++) {
    // The inner loop prints the asterisks for each row.
    for (int j = 0; j < 5; j++) {
      // printf() prints an asterisk followed by a space.
      printf("* ");
    }
    // After printing all asterisks for a row, move to the next line.
    printf("\n");
  }
  return 0;
}
