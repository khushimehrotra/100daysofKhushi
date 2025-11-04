#include <stdio.h>
#include <math.h> // Include for the pow() function

int main() {
    int number, originalNumber, remainder, n = 0;
    long long int result = 0; // Use long long for result to avoid overflow

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number; // Reset originalNumber to the input value

    // Calculate the sum of digits raised to the power of n
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the sum equals the original number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
