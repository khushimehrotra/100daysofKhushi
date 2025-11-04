#include <stdio.h>

int main() {
    int n, i, r, sum, fact, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    sum = 0;

    while (n > 0) {
        fact = 1;
        r = n % 10; // Get the last digit

        // Calculate factorial of the digit
        for (i = 1; i <= r; i++) {
            fact = fact * i;
        }

        sum += fact; // Add the factorial to the sum
        n = n / 10;  // Remove the last digit
    }

    // Check if the sum of factorials is equal to the original number
    if (sum == temp) {
        printf("%d is a Strong Number\n", temp);
    } else {
        printf("%d is not a Strong Number\n", temp);
    }

    return 0;
}
