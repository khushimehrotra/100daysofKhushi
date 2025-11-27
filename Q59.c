#include <stdio.h>

int main() {
    int n, i, even_count = 0, odd_count = 0;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of the given size
    int arr[n];

    // Get array elements from the user
    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Iterate through the array to count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++; // Increment even count if the number is even
        } else {
            odd_count++;  // Increment odd count if the number is odd
        }
    }

    // Print the results
    printf("\nTotal even numbers in the array: %d\n", even_count);
    printf("Total odd numbers in the array: %d\n", odd_count);

    return 0;
}
