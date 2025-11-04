#include <stdio.h>
#include <string.h> // Required for string functions like strlen

#define SIZE 8 // Define the size of the binary number (e.g., 8 bits)

int main() {
    char binary[SIZE + 1];      // To store the input binary string
    char onesComp[SIZE + 1];    // To store the resulting one's complement
    int i, error = 0;           // Loop counter and error flag

    printf("Enter %d bit binary value: ", SIZE);

    // Get input from the user
    scanf("%s", binary);

    // Loop to calculate the one's complement
    for (i = 0; i < SIZE; i++) {
        if (binary[i] == '1') {
            onesComp[i] = '0'; // Flip '1' to '0'
        } else if (binary[i] == '0') {
            onesComp[i] = '1'; // Flip '0' to '1'
        } else {
            printf("Invalid Input. Please enter a valid binary number.\n");
            error = 1; // Set error flag
            break;     // Exit the loop
        }
    }

    // Null-terminate the one's complement string
    onesComp[SIZE] = '\0';

    // Print the result if there was no error
    if (error == 0) {
        printf("Original binary = %s\n", binary);
        printf("One's complement  = %s\n", onesComp);
    }

    return 0;
}