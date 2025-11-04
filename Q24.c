#include <stdio.h>

int main() {
    // Declare variables for units consumed and total bill amount
    float units, bill_amount = 0;

    // Prompt the user to enter the number of units consumed
    printf("Enter the number of units consumed: ");
    // Read the input from the user
    scanf("%f", &units);

    // Calculate the bill based on the specified rates using if-else if statements
    if (units <= 100) {
        // First 100 units at ₹5/unit
        bill_amount = units * 5;
    } else if (units <= 200) {
        // First 100 units at ₹5/unit (500)
        // Remaining units (up to 100 more) at ₹7/unit
        bill_amount = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        // First 100 units at ₹5/unit (500)
        // Next 100 units at ₹7/unit (700)
        // Remaining units (up to 100 more) at ₹10/unit
        bill_amount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        // First 100 units at ₹5/unit (500)
        // Next 100 units at ₹7/unit (700)
        // Next 100 units at ₹10/unit (1000)
        // Remaining units at ₹12/unit
        bill_amount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Display the total electricity bill amount
    printf("Total electricity bill for %.2f units is: ₹%.2f\n", units, bill_amount);

    return 0;
}
