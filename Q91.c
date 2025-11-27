#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    // Convert character to lowercase for case-insensitive checking
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to remove all vowels from a string in-place
void removeVowels(char *str) {
    int i, j;
    // 'i' is the reading index, 'j' is the writing index
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        // If the character is NOT a vowel, copy it to the current write position
        if (!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    // Null-terminate the new, shorter string
    str[j] = '\0';
}

int main() {
    char str[] = "Hello, World! How are you?";
    printf("Original string: %s\n", str);

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}
