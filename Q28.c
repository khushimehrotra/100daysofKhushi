#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Use long long to handle large products

    // Prompt the user for input
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Iterate from 1 to n
    for (i = 1; i <= n; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            // Multiply the product by the even number
            product *= i;
        }
    }

    // Print the final product
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
