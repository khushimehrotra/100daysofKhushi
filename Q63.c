#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i, j;

    // Copy the elements of the first array into the result array
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    // Copy the elements of the second array into the result array,
    // starting immediately after the first array's elements
    for (j = 0; j < size2; j++) {
        result[size1 + j] = arr2[j];
    }
}

int main() {
    int array1[] = {10, 20, 30};
    int array2[] = {40, 50, 60, 70};

    // Calculate the size of each array
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int totalSize = size1 + size2;

    // Declare the destination array with enough space to hold all elements
    int mergedArray[totalSize];

    // Call the merge function
    mergeArrays(array1, size1, array2, size2, mergedArray);

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < totalSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
