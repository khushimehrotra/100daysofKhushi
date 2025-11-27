#include <stdio.h>
#include <stdlib.h> // Required for qsort

// Comparison function for qsort to sort in ascending order
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    // Example array and k value
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    // The k-th smallest element is at index k-1
    // Check if k is valid
    if (k > 0 && k <= n) {
        printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value for k.\n");
    }

    return 0;
}
