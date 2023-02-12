#include<stdio.h>

int main(){

    char op;
    double num1, num2;

    printf("Enter Operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("First Operand: ");
    scanf("%lf", &num1);

    printf("Second Operand: ");
    scanf("%lf", &num2);

    switch (op)
    {
    case '+':
        printf("Sum: %.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("Difference: %.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("Product: %.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;
    case '/':
        printf("Division: %.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
        break;
    default:
        printf("OPPS!! ERROR OCCURED..");
        break;
    }

    return 0;
}
