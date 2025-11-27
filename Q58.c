#include <stdio.h>

int main() {
    int arr[100], i, max, min, num;

    // Prompt user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &num);

    // Prompt user to enter elements for the array
    printf("Enter the elements:\n");
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both the maximum and minimum
    max = arr[0];
    min = arr[0];

    // Iterate through the array starting from the second element
    for (i = 1; i < num; i++) {
        // If the current element is greater than the current maximum, update maximum
        if (arr[i] > max) {
            max = arr[i];
        }
        // If the current element is smaller than the current minimum, update minimum
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
