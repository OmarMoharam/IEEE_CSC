#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number: ");
    scanf(" %d",&num);

    printf("The MSB of %d is %d",num ,(num&128)>>7);
}