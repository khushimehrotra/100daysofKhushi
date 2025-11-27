#include <stdio.h>
#include <limits.h> // For INT_MIN

void findMaxInSubarrays(int arr[], int n, int k) {
    // Iterate through all possible starting points of the window
    for (int i = 0; i <= n - k; i++) {
        int max_val = INT_MIN; // Initialize max_val for the current window

        // Iterate through the current window of size k
        for (int j = 0; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        // Print the maximum value for the current window
        printf("%d ", max_val);
    }
    printf("\n");
}

int main() {
    // Example usage
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("k: %d\n", k);

    printf("Maximum elements in each window of size %d: ", k);
    findMaxInSubarrays(arr, n, k);

    return 0;
}
