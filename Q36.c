#include <stdio.h>

int main() {
    int num1, num2, hcf, min;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the smaller of the two numbers
    min = (num1 < num2) ? num1 : num2;

    // Loop from 1 up to the minimum number
    for (hcf = 1; hcf <= min; ++hcf) {
        // Check if the current number 'hcf' divides both num1 and num2
        if (num1 % hcf == 0 && num2 % hcf == 0) {
            // If it does, update hcf to this number
            // The last value of hcf will be the greatest common divisor
        }
    }

    // Print the result
    printf("The HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
