#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePointer;
    char filename[] = "my_file.txt";
    char textToAppend[100];

    // Open the file in append mode ("a")
    filePointer = fopen(filename, "a");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1; // Exit with an error code
    }

    printf("Enter a line of text to append to the file:\n");

    // Read the line of text from the user
    // Use fgets to read a whole line including spaces
    if (fgets(textToAppend, sizeof(textToAppend), stdin) == NULL) {
        printf("Error reading input.\n");
        fclose(filePointer);
        return 1;
    }

    // Append the text to the end of the file
    // fprintf will write the text at the current position (which is the end of the file)
    fprintf(filePointer, "%s", textToAppend);

    // Close the file
    fclose(filePointer);

    printf("Text successfully appended to %s\n", filename);

    return 0; // Exit successfully
}
