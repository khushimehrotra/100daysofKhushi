#include <stdio.h>

int main() {
    int number, reversed_num = 0, remainder, original_num;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number to compare later
    original_num = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;          // Get the last digit
        reversed_num = reversed_num * 10 + remainder; // Append the digit to the reversed number
        number = number / 10;             // Remove the last digit from the original number
    }

    // Check if the original number is equal to the reversed number
    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}
