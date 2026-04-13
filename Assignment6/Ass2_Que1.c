#include<stdio.h>

int calculate(int a, int b, char op)
{
    if(op == '+')
        return a + b;
    else if(op == '-')
        return a - b;
    else if(op == '*')
        return a * b;
    else if(op == '/')
        return a / b;
    else if(op == '%')
        return a % b;
    else
        return 0;
}

int main()
{
    int a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    result = calculate(a, b, op);

    if(op=='+' || op=='-' || op=='*' || op=='/' || op=='%')
        printf("Result = %d", result);
    else
        printf("Invalid operator");

    return 0;
}