/* Toggle BIT */
#include<stdio.h>

void main()
{
    int num, nth;
    
    printf("Enter the number: ");
    scanf(" %d",&num);
    printf("Enter the nth bit: ");
    scanf(" %d",&nth);

    printf("The number after toggle: %d",(1<<nth) ^ num);
}