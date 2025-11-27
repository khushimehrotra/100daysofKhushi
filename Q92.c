#include <stdio.h>
#include <string.h> // Required for strlen()
#include <ctype.h> // Required for islower()

int main() {
    char str[1000];
    int i, j;
    int found = 0; // Flag to indicate if a repeating character was found

    // Prompt the user to enter a string
    printf("Enter a string: ");
    // Read the string from the user
    scanf("%s", str);

    // Outer loop iterates through each character
    for (i = 0; i < strlen(str); i++) {
        // Check if the character is a lowercase alphabet
        if (islower(str[i])) {
            // Inner loop compares the character with the rest of the string
            for (j = i + 1; j < strlen(str); j++) {
                // Check if a repeating lowercase alphabet is found
                if (str[i] == str[j] && islower(str[j])) {
                    printf("The first repeating lowercase alphabet is: %c\n", str[i]);
                    found = 1; // Set flag to true
                    // Exit both loops since the first repeat is found
                    goto end_loops;
                }
            }
        }
    }

end_loops:
    // If the loops complete without finding a repeating lowercase alphabet
    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
