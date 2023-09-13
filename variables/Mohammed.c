#include <stdio.h>

float calculate(float num1, char op, float num2) {
    // Perform the calculation based on the operator
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            printf("Invalid operator\n");
            return 0;
    }
}

int main() {
    float num1, num2;
    char op, name[100];

    printf("Hello! Welcome to Calculata.\nWhat is your name? ");
    scanf("%s", name);
    printf("Nice to see you %s.\n", name);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    float result = calculate(num1, op, num2);
    printf("Result: %f\n", result);

    return 0;
}

