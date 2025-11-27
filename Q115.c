#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char s[100], t[100];
    int char_counts[ALPHABET_SIZE] = {0};
    int i;

    // Take input for the two strings
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);

    // Check if lengths are different
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count characters for the first string
    for (i = 0; s[i] != '\0'; i++) {
        char_counts[s[i] - 'a']++;
    }

    // Decrement counts for the second string
    for (i = 0; t[i] != '\0'; i++) {
        char_counts[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (char_counts[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    // If all counts are zero, they are anagrams
    printf("Anagram\n");

    return 0;
}
