#include <stdio.h>

int main() {
    int month;

    // Prompt user for month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Switch statement to determine month name and days
    switch (month) {
        case 1:
            printf("January\n31 Days");
            break;
        case 2:
            printf("February\n28 or 29 Days");
            break;
        case 3:
            printf("March\n31 Days");
            break;
        case 4:
            printf("April\n30 Days");
            break;
        case 5:
            printf("May\n31 Days");
            break;
        case 6:
            printf("June\n30 Days");
            break;
        case 7:
            printf("July\n31 Days");
            break;
        case 8:
            printf("August\n31 Days");
            break;
        case 9:
            printf("September\n30 Days");
            break;
        case 10:
            printf("October\n31 Days");
            break;
        case 11:
            printf("November\n30 Days");
            break;
        case 12:
            printf("December\n31 Days");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.");
            break;
    }

    return 0;
}
