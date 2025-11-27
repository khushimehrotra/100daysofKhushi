#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(const char* sentence, char* longestWord) {
    int maxLength = 0;
    int currentLength = 0;
    const char* sentencePtr = sentence;
    const char* startOfCurrentWord = sentence;
    const char* startOfLongestWord = sentence;

    // Iterate through the sentence character by character
    while (*sentencePtr != '\0') {
        // Check if the current character is a letter or a number (part of a word)
        if (isalnum((unsigned char)*sentencePtr)) {
            currentLength++;
        } else {
            // If it's a separator (space, punctuation), a word has ended
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startOfLongestWord = startOfCurrentWord;
            }
            // Move the start pointer to the beginning of the next potential word
            startOfCurrentWord = sentencePtr + 1;
            currentLength = 0;
        }
        sentencePtr++;
    }

    // Check the last word in the sentence after the loop finishes
    if (currentLength > maxLength) {
        maxLength = currentLength;
        startOfLongestWord = startOfCurrentWord;
    }

    // Copy the longest word into the output buffer
    // Use strncpy to prevent buffer overflow and null-terminate manually
    strncpy(longestWord, startOfLongestWord, maxLength);
    longestWord[maxLength] = '\0'; // Ensure null-termination
}

int main() {
    // Define the input sentence (ensure it has enough space for the content)
    char sentence[] = "C programming is a powerful and efficient language for system development.";
    
    // Buffer to store the result (must be large enough for the longest possible word)
    char longestWord[50]; // Assuming no single word will exceed 50 characters

    findLongestWord(sentence, longestWord);

    printf("Original sentence: \"%s\"\n", sentence);
    printf("Longest word found: \"%s\"\n", longestWord);
    printf("Length of the longest word: %zu\n", strlen(longestWord));

    return 0;
}
