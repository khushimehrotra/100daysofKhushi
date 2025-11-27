#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    int character;

    // Get source and destination filenames from the user
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceFileName);
        exit(EXIT_FAILURE); // Exit with an error code
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file %s\n", destinationFileName);
        fclose(sourceFile); // Close the source file before exiting
        exit(EXIT_FAILURE);
    }

    // Read character by character from the source file and write to the destination file
    // The loop continues as long as fgetc() does not return EOF (End Of File)
    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File content copied successfully from %s to %s\n", sourceFileName, destinationFileName);

    return 0; // Indicate successful execution
}
