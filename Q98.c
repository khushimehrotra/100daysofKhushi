#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitialsWithSurname(char* name) {
    int i;
    int len = strlen(name);
    int last_space_pos = -1;

    // Find the position of the last space character
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space_pos = i;
            break;
        }
    }

    // Print initials for all names before the last name
    for (i = 0; i < last_space_pos; i++) {
        // Print the first character if it is the beginning of the string or follows a space
        if (i == 0 || name[i-1] == ' ') {
            printf("%c. ", toupper(name[i]));
        }
    }

    // Print the last name in full, capitalizing the first letter
    if (last_space_pos != -1) {
        // The last name starts from last_space_pos + 1
        for (i = last_space_pos + 1; i < len; i++) {
            if (i == last_space_pos + 1) {
                printf("%c", toupper(name[i]));
            } else {
                printf("%c", tolower(name[i]));
            }
        }
    }
    printf("\n");
}

int main() {
    char name[100];

    printf("Enter a full name (e.g., John Ronald Reuel Tolkien): ");
    // Use fgets to safely read the entire line, including spaces
    fgets(name, sizeof(name), stdin);

    // Remove the newline character added by fgets, if present
    size_t len = strlen(name);
    if (len > 0 && name[len-1] == '\n') {
        name[len-1] = '\0';
    }
    
    printf("Formatted Name: ");
    printInitialsWithSurname(name);

    return 0;
}
