#include <stdio.h>

int main() {
    int rows = 5; // You can change this value to print more or fewer rows

    for (int i = rows; i >= 1; i--) {
        // Inner loop to print the numbers in descending order
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
