// Develop a calculator program that takes two numbers and an arithmetic operation (+, -, *, /) as input from the user and performs the calculation using a switch-case statement. Display the result.

#include <stdio.h>
int main() {
    double num1, num2;
    char op;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    switch (op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }
    return 0;
}

// Enter first number: 10
// Enter operator (+, -, *, /): +
// Enter second number: 5
// Result: 15.00