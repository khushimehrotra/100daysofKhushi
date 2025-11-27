#include <stdio.h>
#include <string.h>

int main() {
    char input_date[] = "25/04/2024";
    char output_date[12]; // Buffer for the new format: dd-Mon-yyyy\0 (12 chars)
    int day, month, year;
    
    // Array of month abbreviations (0-indexed)
    const char* month_abbreviations[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    // Use sscanf to extract day, month, and year from the input string
    // The format specifier "%d/%d/%d" matches the day, month, and year separated by slashes
    if (sscanf(input_date, "%d/%d/%d", &day, &month, &year) == 3) {
        // Validate month is within a valid range
        if (month >= 1 && month <= 12) {
            // Use sprintf to format the date into the new string
            // Use the month_abbreviations array to get the name (month-1 because array is 0-indexed)
            sprintf(output_date, "%02d-%s-%d", day, month_abbreviations[month - 1], year);
            printf("Original date: %s\n", input_date);
            printf("Formatted date: %s\n", output_date);
        } else {
            printf("Error: Invalid month value in input date.\n");
        }
    } else {
        printf("Error: Invalid date format. Expected dd/mm/yyyy.\n");
    }

    return 0;
}
