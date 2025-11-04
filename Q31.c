#include <stdio.h>

int main() {
    int decimalNum, remainder, i = 1;
    long long binaryNum = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Store the original number for the final output message
    int originalNum = decimalNum;

    // Loop to convert decimal to binary
    while (decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }

    printf("The binary representation of %d is %lld\n", originalNum, binaryNum);

    return 0;
}
