#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Handle the edge case for n = 1
    if (n == 1) {
        printf("Pivot integer is: 1\n");
        return 0;
    }

    // Calculate the total sum of numbers from 1 to n
    long long totalSum = (long long)n * (n + 1) / 2;

    for (int x = 1; x <= n; x++) {
        // Sum of numbers from 1 to x
        long long sumLeft = (long long)x * (x + 1) / 2;

        // Sum of numbers from x to n
        // This is totalSum - (sum of numbers from 1 to x-1)
        // sum from 1 to x-1 is (x-1)*(x)/2
        long long sumRight = totalSum - (long long)(x - 1) * x / 2;

        if (sumLeft == sumRight) {
            printf("Pivot integer is: %d\n", x);
            return 0;
        }
    }

    // If no pivot is found after checking all values
    printf("Pivot integer is: -1\n");
    return 0;
}

