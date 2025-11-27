#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int r1, c1, r2, c2, i, j, k;

    // 1. Get dimensions of the first matrix
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    // 2. Get dimensions of the second matrix
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // 3. Check if multiplication is possible
    // The number of columns in the first matrix must equal the number of rows in the second matrix
    if (c1 != r2) {
        printf("Error! Column of first matrix is not equal to row of second matrix.\n");
        return 1; // Exit program with an error code
    }

    // 4. Get elements of the first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            printf("Enter mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // 5. Get elements of the second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("Enter mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // 6. Perform matrix multiplication
    // The result matrix will have dimensions r1 x c2
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0; // Initialize result element to zero
            for (k = 0; k < c1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // 7. Display the result matrix
    printf("\nResult matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
