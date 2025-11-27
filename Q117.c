#include <stdio.h>

int main() {
    int m, n, i, j, k;

    // Get the sizes of the two arrays
    printf("Enter the size of the first array (m): ");
    scanf("%d", &m);
    printf("Enter the size of the second array (n): ");
    scanf("%d", &n);

    // Declare arrays
    int arr1[m], arr2[n], mergedArr[m + n];

    // Get elements for the first array
    printf("Enter the elements of the first sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Get elements for the second array
    printf("Enter the elements of the second sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    i = 0; // Pointer for arr1
    j = 0; // Pointer for arr2
    k = 0; // Pointer for mergedArr

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1 (if any)
    while (i < m) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2 (if any)
    while (j < n) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }

    // Print the merged array
    printf("Merged sorted array:\n");
    for (k = 0; k < m + n; k++) {
        printf("%d ", mergedArr[k]);
    }
    printf("\n");

    return 0;
}
