#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number: ");
    scanf(" %d",&num);
    printf("Number after flipping: %d", ~num);
}