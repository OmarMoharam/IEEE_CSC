#include<stdio.h>

void main()
{
    int num ,sum = 0 ,i;
    printf("Enter the last number: ");
    scanf(" %d",&num);
    for (i = 1; i <= num ; i++)
    {
        sum = sum + i;
    }
    printf("The sum is: %d",sum);
    
}