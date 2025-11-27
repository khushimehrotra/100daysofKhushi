#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Required for dynamic memory allocation (malloc, free)

/**
 * Checks if string str2 is a rotation of string str1.
 * 
 * @param str1 The first string.
 * @param str2 The second string.
 * @return 1 if str2 is a rotation of str1, 0 otherwise.
 */
int isRotation(const char *str1, const char *str2) {
    // 1. Get lengths of the strings
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // 2. Strings must have the same non-zero length to be rotations of each other
    if (len1 != len2 || len1 == 0) {
        return 0;
    }

    // 3. Create a temporary string that is str1 concatenated with itself (str1 + str1)
    // Allocate enough memory for (2 * len1 + 1) characters for the null terminator
    char *temp = (char *)malloc(2 * len1 + 1);
    if (temp == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Copy str1 twice into temp
    strcpy(temp, str1);
    strcat(temp, str1);

    // 4. Check if str2 is a substring of temp using strstr
    // strstr returns a pointer to the first occurrence of str2 in temp, or NULL if not found.
    int found = (strstr(temp, str2) != NULL);

    // 5. Free the dynamically allocated memory
    free(temp);

    // 6. Return the result
    return found;
}

int main() {
    const char *s1 = "waterbottle";
    const char *s2 = "erbottlewat";
    const char *s3 = "bottlewater";
    const char *s4 = "notarotation";

    printf("Checking if \"%s\" is a rotation of \"%s\": %s\n", s2, s1, isRotation(s1, s2) ? "Yes" : "No");
    printf("Checking if \"%s\" is a rotation of \"%s\": %s\n", s3, s1, isRotation(s1, s3) ? "Yes" : "No");
    printf("Checking if \"%s\" is a rotation of \"%s\": %s\n", s4, s1, isRotation(s1, s4) ? "Yes" : "No");
    printf("Checking if \"%s\" is a rotation of \"%s\": %s\n", s1, s1, isRotation(s1, s1) ? "Yes" : "No"); // A string is a rotation of itself

    return 0;
}
