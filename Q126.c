#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[50];
    FILE *filePointer;
    int character;

    // Ask the user for a filename
    printf("Enter the filename: ");
    // Read the filename from standard input. Using fgets is safer than scanf.
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Error reading filename.\n");
        return 1;
    }

    // Attempt to open the file in read mode ("r")
    // The "r" mode will return NULL if the file does not exist [14].
    filePointer = fopen(filename, "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        // If filePointer is NULL, print an error message
        // You can use perror for a more descriptive error message
        // For example: perror("Error opening file");
        printf("Error: Could not open file '%s'. It may not exist.\n", filename);
        exit(1); // Exit the program indicating an error
    } else {
        printf("File opened successfully. Displaying content:\n");
        printf("----------------------------------------------\n");

        // Read the file character by character until the end of the file (EOF) is reached
        while ((character = fgetc(filePointer)) != EOF) {
            // Display each character on the screen
            putchar(character);
        }
        printf("\n----------------------------------------------\n");
        printf("End of file.\n");

        // Close the file
        fclose(filePointer);
    }

    return 0; // Indicate successful execution
}
