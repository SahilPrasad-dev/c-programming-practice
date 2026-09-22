// Simple Calculator (switch - case)
// Context: A basic CLI utility performs quick arithmetic operations based on user choice.
// Task : Read two floating - point numbers A and B, followed by an operator choice character(+, -, *, / ).
// Perform the corresponding operation using a switch statement.
// Handle division by zero explicitly by outputting "Invalid Operation: Division by Zero"

#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("enter two operands and the operator between them : ");

    if (scanf("%lf %lf %c", &a, &b, &op) != 3) return 0;

    switch (op) {
    case '+':
        printf("%.2lf\n", a + b);
        break;
    case '-':
        printf("%.2lf\n", a - b);
        break;
    case '*':
        printf("%.2lf\n", a * b);
        break;
    case '/':
        if (b == 0) {
            printf("Invalid Operation: Division by Zero\n");
        }
        else {
            printf("%.2lf\n", a / b);
        }
        break;
    default:
        printf("Invalid Operator\n");
    }

    return 0;
}