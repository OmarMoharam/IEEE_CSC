/* Set BIT */
#include<stdio.h>

void main()
{
    int num, nth;
    
    printf("Enter the number: ");
    scanf(" %d",&num);
    printf("Enter the nth bit: ");
    scanf(" %d",&nth);

    printf("The bit before set: %d\n",(num>>nth) & 1);
    printf("The number after set: %d",(1<<nth) | num);
}