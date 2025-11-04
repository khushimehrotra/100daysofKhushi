#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        flag = 1;
    } else {
        // Check for divisibility from 2 up to n/2
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                flag = 1; // If divisible, it's not prime
                break;    // Exit the loop early
            }
        }
    }

    // Print the result based on the flag
    if (flag == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
