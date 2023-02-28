#include<stdio.h>

int comparison(int , int);

void main()
{
    int num1, num2, res;
    printf("Enter the first number: ");
    scanf(" %d",&num1);
    printf("Enter the second number: ");
    scanf(" %d",&num2);
    res = comparison(num1,num2);
    if (res == 1)
    {
        printf("Number %d is max and Number %d is min",num1, num2);
    }
    else if (res == 2)
    {
        printf("Number %d is max and Number %d is min",num2, num1);
    }
    else
    {
        printf("The two numbers are equal");
    }
}

int comparison(int num1, int num2)
{
    if (num1 > num2)
    {
        return 1;
    }
    else if (num1 < num2)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}