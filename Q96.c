#include <stdio.h>
#include <string.h>

// Function to reverse a specific segment of a string
void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

// Function to reverse each word in the sentence
void reverseEachWord(char* sentence) {
    char* word_start = sentence;
    char* temp = sentence; // Pointer to traverse the string

    // Iterate through all characters
    while (*temp) {
        // If a space or null terminator is encountered, a word has ended
        if (*temp == ' ' || *temp == '\0') {
            // Reverse the characters from word_start to the character before temp
            reverseWord(word_start, temp - 1);
            // Update word_start for the next word (skip the space)
            word_start = temp + 1;
        }
        temp++;
    }
    // Handle the last word, as the loop terminates before processing the end of the sentence
    reverseWord(word_start, temp - 1);
}

int main() {
    char sentence[] = "C programming is fun";
    printf("Original sentence: %s\n", sentence);

    reverseEachWord(sentence);

    printf("Sentence with words reversed: %s\n", sentence);

    return 0;
}
