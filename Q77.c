#include <stdio.h>
#include <stdbool.h> // For using boolean type

// Function to check if diagonal elements are distinct
bool areDiagonalElementsDistinct(int matrix[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // Compare the i-th diagonal element with the j-th diagonal element
            if (matrix[i][i] == matrix[j][j]) {
                return false; // Duplicate found, return false
            }
        }
    }
    return true; // No duplicates found, return true
}

int main() {
    int size;
    int matrix[100][100]; // Assuming a maximum size of 100x100

    // Get the size of the square matrix from the user
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Read the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct and print the result
    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("The elements on the main diagonal are distinct.\n");
    } else {
        printf("The elements on the main diagonal are not distinct.\n");
    }

    return 0;
}
