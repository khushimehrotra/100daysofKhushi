#include <stdio.h>

int main() {
    int i, j;

    // Outer loop iterates from 5 down to 1 to control the rows
    for (i = 5; i >= 1; i--) {
        // Inner loop iterates from the current row number (i) up to 5 to print the numbers
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
