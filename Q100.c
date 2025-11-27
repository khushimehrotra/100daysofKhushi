#include <stdio.h>
#include <string.h>

void printSubstrings(char str[]) {
    int length = strlen(str);
    int i, j, k;

    printf("All substrings of \"%s\" are:\n", str);

    // Outer loop to pick a starting index
    for (i = 0; i < length; i++) {
        // Middle loop to pick an ending index
        for (j = i; j < length; j++) {
            // Inner loop to print characters from current start to current end
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    char str[] = "abcd";
    printSubstrings(str);
    return 0;
}
