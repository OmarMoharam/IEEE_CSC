#include<stdio.h>

void main()
{
    int num, power, res = 1;
    printf("Enter the number: ");
    scanf(" %d",&num);
    printf("Enter its power: ");
    scanf(" %d",&power);

    for (int i = power; i > 0; i--)
    {
        res = res * num;
    }
    printf("The result is: %d",res);
}