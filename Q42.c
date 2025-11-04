#include <stdio.h>

int main(void) {
    int number, i, sum = 0;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop to find divisors and calculate their sum
    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the original number
    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
