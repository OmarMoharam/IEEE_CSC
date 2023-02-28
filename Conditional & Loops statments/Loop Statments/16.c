#include<stdio.h>

void main()
{
    int num, rev = 0;
    printf("Enter the number to be reversed: ");
    scanf(" %d",&num);

    while (num != 0)
    {
        rev = (num % 10) + (rev * 10);
        num /= 10;
    }
    printf("The reverse is: %d",rev);
    
}