#include <stdio.h>

// Define a maximum size for the matrix
#define SIZE 10

int main() {
    int matrix[SIZE][SIZE];
    int row, col, size;
    int sum = 0;

    // Get the size of the square matrix from the user
    printf("Enter the size of the square matrix (e.g., 3 for a 3x3 matrix): ");
    scanf("%d", &size);

    // Check if the size is valid
    if (size > SIZE || size <= 0) {
        printf("Invalid size. Please enter a size between 1 and %d.\n", SIZE);
        return 1; // Exit the program with an error code
    }

    // Input elements into the matrix
    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    // Calculate the sum of the main diagonal elements
    // For the main diagonal, the row and column indices are the same
    for (row = 0; row < size; row++) {
        sum = sum + matrix[row][row];
    }

    // Print the original matrix (optional)
    printf("\nThe matrix you entered is:\n");
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    // Print the sum of the main diagonal elements
    printf("\nThe sum of the main diagonal elements is: %d\n", sum);

    return 0; // Indicate successful execution
}
