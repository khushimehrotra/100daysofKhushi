#include <stdio.h>

int main() {
    char str[] = "Hello";
    int i = 0;

    printf("Original string: %s\n", str);
    printf("Characters on separate lines:\n");

    // Iterate through the string until the null terminator '\0' is reached
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
