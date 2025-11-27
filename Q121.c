#include <stdio.h>

int main() {
    FILE *file_ptr;
    char name[50];
    int age;

    // Open the file in write mode ("w")
    // "info.txt" will be created if it does not exist,
    // or overwritten if it does exist.
    file_ptr = fopen("info.txt", "w");

    // Check if the file was opened successfully
    if (file_ptr == NULL) {
        printf("Error opening the file.\n");
        return 1; // Return an error code
    }

    // Get input from the user
    printf("Enter your name: ");
    // Use fgets to safely get a string, including spaces
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Error reading name.\n");
        fclose(file_ptr);
        return 1;
    }
    // Remove the newline character added by fgets if present
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input for age.\n");
        fclose(file_ptr);
        return 1;
    }

    // Write the user's name and age to the file using fprintf()
    // The data is written as a formatted string
    fprintf(file_ptr, "Name: %s\n", name);
    fprintf(file_ptr, "Age: %d\n", age);

    // Close the file
    fclose(file_ptr);

    // Display a confirmation message
    printf("\nData successfully saved to info.txt\n");

    return 0; // Return 0 for success
}
