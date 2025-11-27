#include <stdio.h>

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get the elements of the array from the user
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements are: ");

    // Iterate through each element of the array
    for (int i = 0; i < n; i++) {
        int next_greater = -1; // Assume no next greater element initially

        // Iterate through the elements to the right of the current element
        for (int j = i + 1; j < n; j++) {
            // If a greater element is found, it's the next greater element
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break; // Exit the inner loop as we found the first greater element
            }
        }

        // Print the result, with a comma separation except for the last element
        printf("%d", next_greater);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
