#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop from 1 up to the number itself
    for (i = 1; i <= num; i++) {
        // If the number is divisible by i with no remainder, it's a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Print a newline for better formatting
    return 0;
}
