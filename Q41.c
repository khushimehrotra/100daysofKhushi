#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    // Get input from the user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Find the number of digits (and subtract 1 for the power calculation)
    digits = (int)log10(num);

    // Find the first digit
    firstDigit = (int)(num / pow(10, digits));

    // Remove the first and last digits from the original number
    // and extract the middle part of the number
    int middlePart = (num % (int)pow(10, digits)) - lastDigit;

    // Construct the new number:
    // 1. Place the last digit at the beginning (scaled by 10^digits)
    // 2. Add the middle part
    // 3. Add the first digit at the end
    swappedNum = lastDigit * pow(10, digits) + middlePart + firstDigit;

    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
