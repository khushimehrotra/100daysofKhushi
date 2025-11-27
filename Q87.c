#include <stdio.h>
#include <ctype.h> // Required for isspace(), isdigit(), isalnum()

void countCharacters(const char *str, int *spaces, int *digits, int *special) {
    // Initialize counters to zero
    *spaces = 0;
    *digits = 0;
    *special = 0;

    // Iterate through the string character by character
    for (int i = 0; str[i] != '\0'; i++) {
        char currentChar = str[i];

        if (isspace(currentChar)) {
            (*spaces)++;
        } else if (isdigit(currentChar)) {
            (*digits)++;
        } else if (isalnum(currentChar)) {
            // isalnum() checks for letters and digits.
            // If it's not a digit (handled above), it must be a letter.
            // We ignore letters in the 'special characters' count.
            continue; 
        } else {
            // If it's not a space, digit, or letter, it's a special character.
            (*special)++;
        }
    }
}

int main() {
    char inputString[100]; // Buffer to store the user input
    int spacesCount, digitsCount, specialCount;

    // Prompt the user for input
    printf("Enter a string: ");
    // Use fgets to read the string including spaces
    // The size 100 limits input to 99 characters + null terminator
    fgets(inputString, sizeof(inputString), stdin);

    // Call the function to count the characters
    countCharacters(inputString, &spacesCount, &digitsCount, &specialCount);

    // Print the results
    printf("\n--- Character Counts ---\n");
    printf("Spaces:            %d\n", spacesCount);
    printf("Digits:            %d\n", digitsCount);
    printf("Special Characters: %d\n", specialCount);

    return 0;
}
