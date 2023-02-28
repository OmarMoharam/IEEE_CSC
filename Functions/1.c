#include<stdio.h>

float cube(float);

void main()
{
    float num;
    printf("Enter the number: ");
    scanf(" %f",&num);
    printf("The cube of the number is %0.2f",cube(num));
}

float cube (float num)
{
    float sum;
    sum = num * num * num;
    return sum;
}
