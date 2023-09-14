#include <stdio.h>
#include <string.h>

float calculate(float num1, char op, float num2) {
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
    float num1, num2, result;
    char op, choix[100];

    printf("Welcome to the Simple Calculator!\n");
    printf("Do you want to do some calculations? [Yes/No]: ");
    scanf("%s", choix);
    
    if(strcmp(choix, "Yes") == 0) {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the operator (+, -, *, /): ");
        scanf(" %c", &op);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        
        result = calculate(num1, op, num2);
        printf("Result: %f\n", result);
    }
    
    return 0;
}

