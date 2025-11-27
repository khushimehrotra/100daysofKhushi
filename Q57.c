#include <stdio.h>

int main() {
    // Declare an array and variables for size and sum
    int arr[100];
    int size, i, sum = 0;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Get elements from the user and store them in the array
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum by iterating through the array
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Print the final sum
    printf("The sum of array elements is: %d\n", sum);

    return 0;
}

