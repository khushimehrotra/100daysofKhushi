#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string with spaces";
    int i;
    
    printf("Original string: %s\n", str);
    
    // Iterate through the string until the null terminator '\0' is found
    for (i = 0; str[i] != '\0'; i++) {
        // If the current character is a space, replace it with a hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
