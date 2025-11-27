#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;

    // Get the size of the array and k from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);

    // Check if k is valid
    if (k <= 0 || k > n) {
        printf("Invalid value for k. It must be between 1 and %d.\n", n);
        return 1;
    }

    int arr[n];

    // Take the array elements as input
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the first window
    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    // Initialize maxSum with the sum of the first window
    int max_sum = current_sum;

    // Slide the window from the second element to the end of the array
    for (int i = k; i < n; i++) {
        // Add the next element and subtract the first element of the previous window
        current_sum += arr[i] - arr[i - k];

        // Update the maximum sum if the current sum is greater
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    // Print the result
    printf("The maximum sum of a subarray of size %d is: %d\n", k, max_sum);

    return 0;
}
