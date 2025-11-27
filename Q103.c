#include <stdio.h>
#include <stdlib.h>

int pivotIndex(int *nums, int numsSize) {
    if (numsSize == 0) {
        return -1;
    }

    // Calculate the total sum of the array
    int totalSum = 0;
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    for (int i = 0; i < numsSize; i++) {
        // The right sum can be calculated as: totalSum - leftSum - current element
        // Check if leftSum is equal to the sum of all elements to the right
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        // Update leftSum for the next iteration
        leftSum += nums[i];
    }

    // If no pivot index is found
    return -1;
}

int main() {
    // Example usage
    int arr1[] = {1, 7, 3, 6, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int pivot1 = pivotIndex(arr1, size1);
    printf("Pivot index for arr1: %d\n", pivot1); // Expected output: 3

    int arr2[] = {1, 2, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int pivot2 = pivotIndex(arr2, size2);
    printf("Pivot index for arr2: %d\n", pivot2); // Expected output: -1

    int arr3[] = {2, 1, -1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int pivot3 = pivotIndex(arr3, size3);
    printf("Pivot index for arr3: %d\n", pivot3); // Expected output: 0

    return 0;
}
