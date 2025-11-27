#include <stdio.h>

int main() {
    int rows, cols, i, j, isSymmetric = 1;

    // Prompt user for the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Check if the matrix is square
    if (rows != cols) {
        printf("The matrix is not symmetric because it is not a square matrix.\n");
        return 0; // Exit the program
    }

    // Declare a 2D array for the matrix
    int matrix[rows][cols];

    // Prompt user to enter matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry by comparing elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // If any element is not equal to its transposed element, it's not symmetric
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break; // Exit the inner loop
            }
        }
        if (isSymmetric == 0) {
            break; // Exit the outer loop if a mismatch was found
        }
    }

    // Print the result
    if (isSymmetric == 1) {
        printf("The matrix is a symmetric matrix.\n");
    } else {
        printf("The matrix is not a symmetric matrix.\n");
    }

    return 0;
}
