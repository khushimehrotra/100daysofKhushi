#include <stdio.h>
#include <string.h>
#include <ctype.h> // Required for tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a string: ");
    // Use fgets for safer input than gets()
    fgets(str, sizeof(str), stdin); 

    for (i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase for easier comparison
        char ch = tolower(str[i]);

        // Check if it's an alphabet character
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                // If it's an alphabet but not a vowel, it's a consonant
                consonants++;
            }
        }
    }

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
