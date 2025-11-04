#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

// Function to find the Least Common Multiple (LCM)
int lcm(int a, int b) {
    // LCM of two numbers is (num1 * num2) / gcd(num1, num2)
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print the LCM
    int result = lcm(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}
