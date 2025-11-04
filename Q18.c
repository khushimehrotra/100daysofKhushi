#include <stdio.h>

int main() {
    int percentage;
    char grade;

    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80 && percentage < 90) {
        grade = 'B';
    } else if (percentage >= 70 && percentage < 80) {
        grade = 'C';
    } else if (percentage >= 60 && percentage < 70) {
        grade = 'D';
    } else if (percentage < 60 && percentage >= 0) {
        grade = 'F';
    } else {
        printf("Invalid percentage entered.\n");
        return 1; // Indicate an error
    }

    printf("Your grade is: %c\n", grade);

    return 0; // Indicate success
}
