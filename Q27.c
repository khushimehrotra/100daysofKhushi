#include <stdio.h>

int main() {
  int n, sum = 0, i = 1;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  // The loop generates the first n odd numbers.
  // The first odd number is 1 (2*1 - 1).
  // The second is 3 (2*2 - 1).
  // The nth is 2*n - 1.
  while (i <= n) {
    sum = sum + (2 * i - 1);
    i++;
  }
  printf("Sum of first %d odd numbers is: %d\n", n, sum);
  return 0;
}
