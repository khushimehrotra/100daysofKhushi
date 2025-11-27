#include <stdio.h>

// Function to find the missing number in an array
int findMissingNumber(int arr[], int n) {
    // Calculate the expected sum of numbers from 0 to n
    // The formula is n * (n + 1) / 2
    int expectedSum = (n * (n + 1)) / 2;

    // Calculate the sum of the elements in the given array
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    // The missing number is the difference between the expected and actual sums
    return expectedSum - actualSum;
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Get the array elements from the user
    printf("Enter %d integers between 0 to %d (with one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the missing number
    int missingNumber = findMissingNumber(arr, n);

    // Print the result
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
