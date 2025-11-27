#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int main() {
    // Example array
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int largest = INT_MIN;
    int second = INT_MIN;

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest; // The previous largest becomes the second largest
            largest = arr[i]; // The current element is the new largest
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i]; // The current element is the new second largest
        }
    }

    // Check if a second largest element was found
    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The largest element is %d\n", largest);
        printf("The second largest element is %d\n", second);
    }

    return 0;
}
