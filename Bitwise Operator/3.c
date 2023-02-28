/* Get BIT */
#include<stdio.h>

void main()
{
    int num, nth;
    
    printf("Enter the number: ");
    scanf(" %d",&num);
    printf("Enter the nth bit: ");
    scanf(" %d",&nth);

    printf("The %dth bit of number %d is %d",nth ,num, (num>>nth)&1);
}