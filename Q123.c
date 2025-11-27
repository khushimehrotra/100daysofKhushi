#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For isspace()

int main() {
    FILE *file;
    char filePath[100];
    char ch;
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int inWord = 0; // Flag to track if we are inside a word

    // Prompt for file path
    printf("Enter the file path: ");
    scanf("%s", filePath);

    // Open the file in read mode
    file = fopen(filePath, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filePath);
        return 1;
    }

    // Read the file character by character until the end of the file (EOF)
    while ((ch = fgetc(file)) != EOF) {
        // Increment character count
        charCount++;

        // Increment line count for each newline character
        if (ch == '\n') {
            lineCount++;
        }

        // Check if the character is a space or other whitespace
        if (isspace(ch)) {
            // If we were inside a word, this is the end of a word
            if (inWord) {
                wordCount++;
                inWord = 0; // Reset the flag
            }
        } else {
            // If it's not a space, we are now inside a word
            inWord = 1;
        }
    }

    // If the file ends with a non-space character, the last word won't have been counted
    if (inWord) {
        wordCount++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("File Analysis:\n");
    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0;
}
