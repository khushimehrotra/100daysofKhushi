#include <stdio.h>

// Function to perform diagonal traversal
void diagonalTraversal(int mat[][3], int row, int col) {
    // Total number of diagonals
    int totalDiagonals = row + col - 1;
    int i = 0, j = 0, k;

    // Loop through all diagonals
    for (k = 0; k < totalDiagonals; k++) {
        // Starting row and column for each diagonal
        if (k < col) {
            i = 0;
            j = k;
        } else {
            i = k - col + 1;
            j = col - 1;
        }

        // Print elements of the current diagonal
        while (i < row && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
}

int main() {
    // Example matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = 3;
    int col = 3;

    printf("Diagonal traversal of the matrix:\n");
    diagonalTraversal(matrix, row, col);

    return 0;
}
