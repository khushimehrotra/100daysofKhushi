#include <stdio.h>

int main() {
    int arr[50], n, i, pos;

    // Get the size of the array
    printf("Enter the size of the array (max 50): ");
    scanf("%d", &n);

    // Get array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Get the position to delete
    printf("Enter the position (1 to %d) to delete: ", n);
    scanf("%d", &pos);

    // Validate the position
    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return 1; // Indicate an error
    }

    // Shift elements to the left
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    n--;

    // Print the new array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
