#include <stdio.h>

// Function to find the index of the smallest element >= x
// using binary search
int findCeilIndex(int arr[], int low, int high, int x) {
    // If x is smaller than or equal to the first element, return the index of the first element
    if (x <= arr[low]) {
        return low;
    }

    // If x is greater than the last element, no ceil exists
    if (x > arr[high]) {
        return -1;
    }

    // Standard binary search to find the ceil
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2; // Avoid potential integer overflow

        if (arr[mid] == x) {
            return mid; // Found x exactly, return its index
        } else if (arr[mid] < x) {
            // If mid is less than x, the ceil must be in the right half
            low = mid + 1;
        } else {
            // If mid is greater than x, the ceil could be mid or in the left half
            // Ensure the previous element is not the ceil
            if (mid == 0 || arr[mid - 1] < x) {
                return mid; // mid is the smallest element >= x
            } else {
                // Ceil is in the left half
                high = mid - 1;
            }
        }
    }

    // This part should ideally not be reached if the initial conditions are handled
    // but as a fallback, it returns the final 'low' index which would be the correct one
    return low;
}


int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, 0, n - 1, x);

    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The smallest element >= %d is %d at index %d\n", x, arr[index], index);
    }

    return 0;
}
