#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer (n): ");
    
    // Read the value of n from the user
    scanf("%d", &n);

    // Check if the input n is a valid positive integer
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    printf("Numbers from 1 to %d are:\n", n);

    // Loop from 1 up to and including n
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0; // Indicate successful execution
}
