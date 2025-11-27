#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100]; // Assuming a maximum size for the matrix
    int rowSums[100];

    // Get the dimensions of the matrix from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Get matrix elements from the user
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize sum for the current row
        for (j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j]; // Add the current element to the row sum
        }
    }

    // Print the matrix and the sum of each row
    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
