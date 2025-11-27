#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables
    int max_so_far = INT_MIN;
    int current_max = 0;
    int max_element = INT_MIN;
    int all_negative = 1;

    // Kadane's algorithm
    for (int i = 0; i < n; i++) {
        // Keep track of the largest single element for the all-negative case
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
        if (arr[i] >= 0) {
            all_negative = 0;
        }

        // Update current_max by adding the current element
        current_max = current_max + arr[i];

        // If current_max is greater than max_so_far, update max_so_far
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }

        // If current_max becomes negative, reset it to 0
        if (current_max < 0) {
            current_max = 0;
        }
    }

    // If all elements are negative, the largest single element is the answer.
    // Otherwise, print the result from Kadane's algorithm.
    if (all_negative == 1) {
        printf("Maximum contiguous subarray sum (all negative): %d\n", max_element);
    } else {
        printf("Maximum contiguous subarray sum: %d\n", max_so_far);
    }

    return 0;
}
