#include <stdio.h>

int main() {
    int rows = 5; // Number of rows

    // Outer loop for rows
    for (int i = rows; i >= 1; i--) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
