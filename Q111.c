#include <stdio.h>
#include <stdlib.h>

// Function to find the first negative integer in each window of size k
void findFirstNegative(int arr[], int n, int k) {
    int i = 0, j = 0;
    // Loop through the array
    while (j < n) {
        // If the current element is negative, it is the first negative integer
        if (arr[j] < 0) {
            printf("%d ", arr[j]);
            // Move the window to the next position
            i++;
            j++;
        }
        // If the current window size is less than k, move the window to the right
        else if (j - i + 1 < k) {
            j++;
        }
        // If no negative integer found in the current window, print 0
        else {
            printf("0 ");
            // Move the window to the next position
            i++;
            j++;
        }
    }
    printf("\n");
}

int main() {
    int n; // Number of elements in the array
    int k; // Size of the subarray

    // Get the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Get the elements of the array from the user
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the size of the subarray
    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);

    // Find and print the first negative integer in each subarray of size k
    findFirstNegative(arr, n, k);

    return 0;
}
