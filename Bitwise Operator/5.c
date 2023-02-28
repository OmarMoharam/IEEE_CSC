/* CLR BIT */
#include<stdio.h>

void main()
{
    int num, nth;
    
    printf("Enter the number: ");
    scanf(" %d",&num);
    printf("Enter the nth bit: ");
    scanf(" %d",&nth);

    printf("The bit before unset: %d\n",(num>>nth) & 1);
    printf("The number after unset: %d",num & (~(1<<nth)));
}