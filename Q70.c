#include <stdio.h>

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    // If k is greater than or equal to n, take modulo n to avoid redundant rotations
    k = k % n;
    if (k == 0) {
        return; // No rotation needed
    }

    int num_sets = gcd(n, k);
    int temp, j, d;

    // Iterate through each set
    for (int i = 0; i < num_sets; i++) {
        // Move the first element of the set to a temporary variable
        temp = arr[i];
        j = i;

        // Perform rotation within the current set
        while (1) {
            d = (j - k); // Calculate the destination index for right rotation

            // Handle wrap-around for destination index
            if (d < 0) {
                d = d + n;
            }

            if (d == i) {
                break; // We have completed the cycle
            }

            arr[j] = arr[d]; // Move element from destination to current position
            j = d;           // Update current position
        }
        // Place the original temp element in its final correct position
        arr[j] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test the program
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of positions to rotate right

    printf("Original array: ");
    printArray(arr, n);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions: ", k);
    printArray(arr, n);

    return 0;
}
