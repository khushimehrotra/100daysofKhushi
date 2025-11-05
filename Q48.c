#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows, from 1 to 5
    for (i = 1; i <= 5; i++) {
        // Inner loop for columns, from 1 up to the current row number (i)
        for (j = 1; j <= i; j++) {
            // Print the column number
            printf("%d", j);
        }
        // After each row is complete, print a newline to move to the next line
        printf("\n");
    }
    return 0;
}
