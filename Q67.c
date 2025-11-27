#include <stdio.h>

int main() {
    int arr[100]; // Assuming a maximum size of 100
    int size, i, pos, num;

    // Get the current size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Get the elements for the array
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to be inserted and its position
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    printf("Enter the position (1-based) to insert the element: ");
    scanf("%d", &pos);

    // Validate the position
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position entered.\n");
    } else {
        // Shift elements to the right
        for (i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element at the specified position
        // Remember that array indices are 0-based, so we use pos-1
        arr[pos - 1] = num;

        // Increase the size of the array
        size++;

        // Print the new array
        printf("Array after insertion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
