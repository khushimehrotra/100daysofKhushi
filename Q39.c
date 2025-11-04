#include <stdio.h>

int main() {
    int num, rem;
    int odd_product = 1; // Initialize the product to 1

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle the case of 0 separately, as the loop will not run
    if (num == 0) {
        printf("The product of odd digits is 0.\n");
        return 0;
    }

    // Create a temporary variable to work with, to avoid modifying the original
    int temp_num = num;

    // Loop through each digit of the number
    while (temp_num > 0) {
        // Get the last digit
        rem = temp_num % 10;

        // Check if the digit is odd
        if (rem % 2 != 0) {
            // Multiply the odd digit into the product
            odd_product *= rem;
        }

        // Remove the last digit
        temp_num /= 10;
    }

    // Print the final result
    printf("The product of odd digits is: %d\n", odd_product);

    return 0;
}
