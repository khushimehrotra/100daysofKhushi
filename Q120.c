#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 500

void convertToSentenceCase(char* str) {
    int length = strlen(str);
    int capitalizeNext = 1; // Flag to capitalize the very first character

    for (int i = 0; i < length; i++) {
        // Check if the current character is a letter
        if (isalpha((unsigned char)str[i])) {
            if (capitalizeNext) {
                str[i] = toupper((unsigned char)str[i]);
                capitalizeNext = 0; // Reset the flag
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        } 
        // If the character is a period, set the flag to capitalize the next letter
        else if (str[i] == '.') {
            capitalizeNext = 1;
        }
    }
}

int main() {
    char inputString[MAX_LEN];

    printf("Enter a string: ");
    // Use fgets to safely read a line of text including spaces
    if (fgets(inputString, MAX_LEN, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove the newline character if it exists
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    convertToSentenceCase(inputString);

    printf("Sentence case string: %s\n", inputString);

    return 0;
}
