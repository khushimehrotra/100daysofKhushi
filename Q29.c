#include <stdio.h>

int main() {
    int n, c;
    long long int factorial = 1; // Use long long for potentially large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a for loop
        for (c = 1; c <= n; c++) {
            factorial *= c;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}

