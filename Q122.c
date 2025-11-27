#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256 // Define a buffer size for reading lines

int main() {
    FILE *file_pointer;
    char buffer[BUFFER_SIZE];
    const char *filename = "info.txt"; // The name of the file to open

    // 1. Open the file in read mode ("r")
    file_pointer = fopen(filename, "r");

    // 2. Check if the file was opened successfully
    if (file_pointer == NULL) {
        // Print an error message if the file couldn't be opened
        // Using perror() for a system-specific error message is also an option
        printf("Error: Could not open file '%s'\n", filename);
        return 1; // Indicate an error occurred
    }

    printf("Reading contents of %s:\n", filename);
    printf("----------------------------------------\n");

    // 3. Read the file line by line until EOF
    // fgets() returns NULL when it reaches the end of the file (EOF) or on error
    while (fgets(buffer, sizeof(buffer), file_pointer) != NULL) {
        // 4. Print each line to the console
        printf("%s", buffer);
    }

    printf("----------------------------------------\n");
    printf("End of file reached.\n");

    // 5. Close the file to free up resources
    fclose(file_pointer);

    return 0; // Indicate successful execution
}
