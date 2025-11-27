#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1;
    }

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(inputFile); // Close the input file before exiting
        return 1;
    }

    // Read character by character from input file
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert the character to uppercase if it's a lowercase letter
        if (islower(ch)) {
            ch = toupper(ch);
        }
        // Write the character to the output file
        fputc(ch, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion complete. Output written to output.txt\n");

    return 0;
}
