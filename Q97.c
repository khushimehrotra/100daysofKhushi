#include <stdio.h>
#include <string.h>
#include <ctype.h> // Required for toupper()

void printInitials(char name[]) {
    int i;
    // Print the first character (initial of the first name)
    if (name[0] != '\0') {
        // Convert to uppercase before printing
        printf("%c", toupper(name[0]));
    }

    // Iterate through the rest of the string
    for (i = 1; i < strlen(name); i++) {
        // Check if the current character is a space
        if (name[i] == ' ') {
            // Check if the next character is a letter and not the end of the string
            if (name[i + 1] != '\0') {
                // Print the next character (initial of the next name/word)
                // Convert to uppercase before printing
                printf("%c", toupper(name[i + 1]));
            }
        }
    }
    printf("\n"); // Print a newline at the end
}

int main() {
    char name[100]; // Buffer to hold the name

    printf("Enter a name: ");
    // Use fgets to safely read a line of input, including spaces
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1; // Handle input error
    }

    // Remove the trailing newline character added by fgets if present
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");
    printInitials(name);

    return 0;
}
