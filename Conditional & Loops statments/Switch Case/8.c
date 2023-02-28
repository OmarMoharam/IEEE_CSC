#include<stdio.h>

void main()
{
    float num1, num2;
    float sum, sub, div, mult;
    char op;

    printf("Enter the First and Second Number: ");
    scanf(" %f%f", &num1, &num2);
    printf("Enter the operation(+ , - , * , /): ");
    scanf(" %c", &op);

    sum = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    mult = num1 * num2;
    
    switch (op)
    {
    case '+':
        printf("The sum is: %0.2f",sum);
        break;
    case '-':
        printf("The subtraction is: %0.2f",sub);
        break;
    case '*':
        printf("The multiplication is: %0.2f",mult);
        break;
    case '/':
        printf("The division is: %0.2f",div);
        break;
    
    default:
    printf("You Entered the wrong operation!");
        break;
    }
}