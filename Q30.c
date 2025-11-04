#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to print it later
    int originalNum = num;

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append the digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    printf("Original Number = %d\n", originalNum);
    printf("Reversed Number = %d\n", reversedNumber);

    return 0;
}
