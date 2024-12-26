#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    while (1) { // Infinite loop to keep the calculator running
        // Input numbers and operator
        printf("\nSimple Calculator\n");
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); // Space before %c to ignore newline character
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform calculation
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
        }

        // Loop restarts from the beginning
        printf("\nRestarting the calculator...\n");
    }

    return 0;
}
