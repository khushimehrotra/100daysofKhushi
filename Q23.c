#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    // Prompt the user to enter the number of days the book is late
    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);

    // Calculate the fine based on the number of days late
    if (days_late > 30) {
        printf("Membership Cancelled.\n");
    } else if (days_late <= 0) {
        printf("No fine is applicable.\n");
    } else {
        if (days_late <= 5) {
            fine = days_late * 2;
        } else if (days_late <= 10) {
            // Fine for the first 5 days is already calculated in the next block
            // Fine for the next 5 days is 5 * 4
            fine = (5 * 2) + ((days_late - 5) * 4);
        } else { // days_late is between 11 and 30
            // Fine for first 5 days is 5 * 2
            // Fine for next 5 days is 5 * 4
            // Fine for the remaining days is (days_late - 10) * 6
            fine = (5 * 2) + (5 * 4) + ((days_late - 10) * 6);
        }
        printf("The total fine is: ₹%d\n", fine);
    }

    return 0;
}
