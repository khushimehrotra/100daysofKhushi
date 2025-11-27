#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse the array using two pointers
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end pointers
        swap(&arr[start], &arr[end]);
        // Move pointers inward
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Reverse the array
    reverseArray(arr, 0, n - 1);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}
