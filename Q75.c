#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], sum[ROWS][COLS];
    int i, j;

    // --- Input elements for the first matrix ---
    printf("Enter elements of the first %dx%d matrix:\n", ROWS, COLS);
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // --- Input elements for the second matrix ---
    printf("\nEnter elements of the second %dx%d matrix:\n", ROWS, COLS);
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf("Enter element b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // --- Adding two matrices ---
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // --- Displaying the sum matrix ---
    printf("\nSum of the two matrices is:\n");
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
