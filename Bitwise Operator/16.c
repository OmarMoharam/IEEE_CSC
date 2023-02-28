#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number: ");
    scanf(" %d",&num);

    /*if (num & 1)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }*/
    
    printf("/*****Note*****/\n");
    printf("If 1 the number is odd\vIf 0 the number is even\n");
    printf("The result is: %d",num & 1);
    

}