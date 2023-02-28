#include<stdio.h>

void main()
{
    int num;
    printf("Enter the number: ");
    scanf(" %d",&num);

    if (num % 5 || num % 11)
    {
        printf("The number you entered is not divisible by 5 and 11");
    }
    else
    {
        printf("The number you entered is divisible by 5 and 11");
    }
}