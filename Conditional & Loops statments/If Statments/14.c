#include<stdio.h>

void main()
{
    int ang1, ang2, ang3, sum;
    printf("Enter the first angle: ");
    scanf(" %d",&ang1);
    printf("Enter the second angle: ");
    scanf(" %d",&ang2);
    printf("Enter the third angle: ");
    scanf(" %d",&ang3);
    
    sum = ang1 + ang2 + ang3; 

    if (sum == 180)
    {
        printf("The triangle is VALID");
    }
    else
    {
        printf("The triangle is NOT VALID");
    }
}