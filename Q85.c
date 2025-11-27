#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    // Iterate until the start pointer is no longer less than the end pointer
    while (start < end) {
        // Swap the character at start with the character at end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the pointers inward
        start++;
        end--;
    }
}

int main() {
    char myString[] = "Hello, World!";
    
    printf("Original string: %s\n", myString);

    // Call the function to reverse the string
    reverseString(myString);

    printf("Reversed string: %s\n", myString);

    return 0;
}
