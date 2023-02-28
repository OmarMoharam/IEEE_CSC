#include<stdio.h>

void main()
{
    int num;
    printf("Enter the last number: ");
    scanf(" %d",&num);

    while (num > 0)
    {
        printf("%d\n",num);
        num--;
    }
    
}