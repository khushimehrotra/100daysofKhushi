#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Q17.Write a program to find the roots of a quadratic equation and categorize them.

// Function to find and print the roots of a quadratic equation
void findRoots(double a, double b, double c) {
    // Check if the equation is not quadratic
    if (a == 0) {
        printf("The equation is not quadratic.\n");
        return;
    }

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(discriminant));

    // Case 1: Discriminant is positive (real and different roots)
    if (discriminant > 0) {
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", (-b + sqrt_val) / (2 * a));
        printf("Root 2 = %.2lf\n", (-b - sqrt_val) / (2 * a));
    }
    // Case 2: Discriminant is zero (real and equal roots)
    else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", -b / (2 * a));
    }
    // Case 3: Discriminant is negative (complex roots)
    else {
        printf("Roots are complex.\n");
        printf("Root 1 = %.2lf + i%.2lf\n", -b / (2 * a), sqrt_val / (2 * a));
        printf("Root 2 = %.2lf - i%.2lf\n", -b / (2 * a), sqrt_val / (2 * a));
    }
}

int main() {
    double a, b, c;

    // Get coefficients from the user
    printf("Enter coefficients a, b, and c for the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Call the function to find and print the roots
    findRoots(a, b, c);

    return 0;
}
