#include <stdio.h>

int main(void) {
  int num, sum = 0, rem;

  printf("Enter a number: ");
  scanf("%d", &num);

  // Keep dividing the number by 10 until it becomes 0
  while (num != 0) {
    // Get the last digit using the modulo operator
    rem = num % 10;
    // Add the last digit to the sum
    sum += rem;
    // Remove the last digit by integer division
    num /= 10;
  }

  printf("Sum of digits is: %d\n", sum);
  return 0;
}
