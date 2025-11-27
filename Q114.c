#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int char_index[128]; // Stores the last seen index of each character (ASCII)
    memset(char_index, -1, sizeof(char_index)); // Initialize with -1 (not seen)

    int max_len = 0;
    int start = 0; // The starting index of the current substring

    for (int i = 0; s[i] != '\0'; i++) {
        // If the character has been seen before and its last occurrence is
        // within the current substring (i.e., its index is >= start),
        // move the start of the current substring to the position after the last occurrence.
        if (char_index[s[i]] >= start) {
            start = char_index[s[i]] + 1;
        }

        // Update the last seen index of the current character
        char_index[s[i]] = i;

        // Calculate the length of the current substring and update max_len if it's larger
        int current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    return max_len;
}

int main() {
    char s[100]; // Buffer to store the input string

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove the newline character from the end of the string if it exists
    s[strcspn(s, "\n")] = '\0';

    int length = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters is: %d\n", length);

    return 0;
}
