#include <stdio.h>

// Function to find the first and last occurrences
void findFirstAndLast(int nums[], int n, int target, int *first, int *last) {
    // Initialize first and last to -1
    *first = -1;
    *last = -1;

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            // If this is the first occurrence, record the index
            if (*first == -1) {
                *first = i;
            }
            // Always update the last occurrence index
            *last = i;
        }
    }
}

int main() {
    // Example sorted array with repeated elements
    int nums[] = {5, 7, 7, 8, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;

    // Prompt user for the target value
    printf("Enter the target value: ");
    scanf("%d", &target);

    int firstOccurrence, lastOccurrence;

    // Call the function to find the indices
    findFirstAndLast(nums, n, target, &firstOccurrence, &lastOccurrence);

    // Print the results
    printf("First and last occurrences: %d, %d\n", firstOccurrence, lastOccurrence);

    return 0;
}
