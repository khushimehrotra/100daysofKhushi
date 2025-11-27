#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");
    for (int i = 0; i < n; i++) {
        int pge = -1; // Initialize previous greater element to -1
        // Iterate from the element to its immediate left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j]; // Found the nearest greater element to the left
                break; // Stop the inner loop as we need the nearest one
            }
        }
        // Print the result for the current element
        printf("%d", pge);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
