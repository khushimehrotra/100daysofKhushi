#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (i = 1; i <= n; i++) {
        // The numerator is 2*i and the denominator is 4*i - 1
        sum += (double)(2 * i) / (4 * i - 1);
    }

    printf("The sum of the series is: %.6lf\n", sum);

    return 0;
}
