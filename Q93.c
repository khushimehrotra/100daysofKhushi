#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    // Array to store character counts (ASCII values 0-255)
    int count[256] = {0};
    int i = 0;

    // Check if the lengths are different
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not anagrams
    }

    // Count characters in the first string
    while (str1[i] != '\0') {
        count[str1[i]]++;
        i++;
    }

    // Decrement count for characters in the second string
    i = 0;
    while (str2[i] != '\0') {
        count[str2[i]]--;
        i++;
    }

    // Check if all counts are zero
    for (int j = 0; j < 256; j++) {
        if (count[j] != 0) {
            return 0; // Not anagrams
        }
    }

    return 1; // Strings are anagrams
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    // Using fgets to avoid buffer overflows, as gets() is considered unsafe
    fgets(str1, sizeof(str1), stdin);
    // Remove the newline character from fgets
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (areAnagrams(str1, str2)) {
        printf("'%s' and '%s' are anagrams.\n", str1, str2);
    } else {
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);
    }

    return 0;
}
