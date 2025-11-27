#include <stdio.h>

/**
 * Performs binary search on a sorted integer array.
 * 
 * @param arr The sorted array to search within.
 * @param n The number of elements in the array.
 * @param x The element to search for.
 * @return The index of the element if found, otherwise -1.
 */
int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    // Continue the search as long as the left index is less than or equal to the right index
    while (left <= right) {
        // Calculate the middle index. Using the formula below helps prevent potential integer overflow.
        int mid = left + (right - left) / 2;

        // If the target element is found at the middle, return the index
        if (arr[mid] == x) {
            return mid;
        }
        
        // If the target element is greater than the middle element, ignore the left half
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        
        // If the target element is smaller than the middle element, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // If the loop finishes without finding the element, it is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 5, 10, 18, 23, 28, 33}; // The array must be sorted
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculate the number of elements
    int x = 18;                             // The element to be searched

    int result = binarySearch(arr, n, x); // Call the binary search function

    if (result == -1) {
        printf("Element %d not found in the array.\n", x);
    } else {
        printf("Element %d found at index: %d\n", x, result);
    }

    // Example for an element not in the array
    int y = 50;
    result = binarySearch(arr, n, y);
    if (result == -1) {
        printf("Element %d not found in the array.\n", y);
    } else {
        printf("Element %d found at index: %d\n", y, result);
    }

    return 0;
}
