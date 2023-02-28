#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number: ");
    scanf(" %d",&num);

    printf("The LSB of %d is %d",num ,num&1);
}