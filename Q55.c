#include <stdio.h>

int main() {
    int num, i, n, count;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);

    // Iterate from 2 to n to check each number
    for (num = 2; num <= n; num++) {
        count = 0;

        // Check for divisors from 2 up to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                count++;
                break; // If a divisor is found, it's not prime
            }
        }

        // If count is 0, the number is prime
        if (count == 0) {
            printf("%d ", num);
        }
    }

    printf("\n"); // Print a newline at the end
    return 0;
}
