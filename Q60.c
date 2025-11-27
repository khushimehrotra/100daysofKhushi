#include <stdio.h>

int main() {
    // Sample array
    int arr[] = {2, -1, 0, 5, -3, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]); // Get the number of elements in the array

    // Initialize counters
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    // Print the results
    printf("Positive elements: %d\n", positive_count);
    printf("Negative elements: %d\n", negative_count);
    printf("Zero elements: %d\n", zero_count);

    return 0;
}
