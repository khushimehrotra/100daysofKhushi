#include <stdio.h>
#include <stdlib.h> // Required for abs()

int findMostFrequentDigit(long long num) {
    // Array to store counts of digits 0-9, initialized to 0
    int counts[10] = {0}; 
    int i;
    long long temp_num;

    // Handle the case where the input number is 0 separately
    if (num == 0) {
        return 0;
    }

    // Work with the absolute value of the number
    temp_num = abs(num); 

    // Iterate through the digits of the number
    while (temp_num > 0) {
        int digit = temp_num % 10; // Extract the last digit
        counts[digit]++;           // Increment the counter for that digit
        temp_num /= 10;            // Remove the last digit
    }

    // Find the digit with the maximum count
    int maxCount = -1;
    int mostFrequentDigit = -1;

    for (i = 0; i < 10; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostFrequentDigit = i;
        }
    }

    return mostFrequentDigit;
}

int main() {
    long long number;
    int frequentDigit;

    // Prompt user for input
    printf("Enter an integer number: ");
    if (scanf("%lld", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Call the function to find the most frequent digit
    frequentDigit = findMostFrequentDigit(number);

    // Display the result
    printf("The digit that occurs most frequently in %lld is: %d\n", number, frequentDigit);

    return 0;
}
