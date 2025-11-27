#include <stdio.h>

int main() {
    int n, i;
    int repeated_element = 0;

    // Prompt user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Prompt user to enter array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the repeated element using XOR
    for (i = 0; i < n; i++) {
        repeated_element = repeated_element ^ arr[i];
    }

    // Print the result
    printf("The repeated element is: %d\n", repeated_element);

    return 0;
}
