#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int count = 0;

    // Prompt user for string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Prompt user for the character to count
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline

    // Loop through the string and count the occurrences of the character
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i]) {
            ++count;
        }
    }

    // Print the result
    printf("Frequency of %c = %d\n", ch, count);

    return 0;
}
