#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;
            
        case '%':
            // Modulo operator is typically for integers, so we cast to int
            if (num2 != 0) {
                // Modulo operator returns an integer remainder
                int intNum1 = (int)num1;
                int intNum2 = (int)num2;
                int intResult = intNum1 % intNum2;
                printf("%d %c %d = %d", intNum1, operator, intNum2, intResult);
            } else {
                 printf("Error! Division by zero is not allowed.");
            }
            break;

        default:
            printf("Error! Operator is not correct.");
    }

    return 0;
}
