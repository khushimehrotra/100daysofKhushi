#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Prompt the user for input
    printf("Enter a lowercase string: ");
    // Read the string from the user
    scanf("%s", str);

    // Iterate through the string until the null terminator ('\0') is reached
    while (str[i] != '\0') {
        // Check if the current character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from the ASCII value
            str[i] = str[i] - 32;
        }
        // Move to the next character
        i++;
    }

    // Print the modified string
    printf("Uppercase string: %s\n", str);

    return 0;
}
