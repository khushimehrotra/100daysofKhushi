#include <stdio.h>

int main() {
    // Declare a character array (string) and initialize it
    char str[] = "Hello, World!"; 
    // You can also take input from the user:
    // char str[100];
    // printf("Enter a string: ");
    // scanf("%99[^\n]", str); // Reads input including spaces up to 99 chars

    int count = 0; // Variable to store the character count
    int i = 0;     // Loop counter/index

    // Iterate through the string until the null terminator ('\0') is found
    while (str[i] != '\0') {
        count++; // Increment the counter for each character
        i++;     // Move to the next character
    }

    // Print the result
    printf("The string is: \"%s\"\n", str);
    printf("The number of characters in the string is: %d\n", count);

    return 0;
}
