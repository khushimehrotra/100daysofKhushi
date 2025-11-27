#include <stdio.h>

int main() {
    int arr[100]; // Assuming an array with a max size of 100
    int n, i, key, pos = 0;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Get the sorted array elements
    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &key);

    // Find the position where the element should be inserted
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
        // If the key is greater than all existing elements,
        // it should be inserted at the end.
        if (i == n - 1 && arr[i] < key) {
            pos = n;
        }
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the found position
    arr[pos] = key;
    n++; // Increment the size of the array

    // Print the final array
    printf("The array after insertion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
