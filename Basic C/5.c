#include<stdio.h>

void main()
{
    float len,wid,area;

    printf("Enter the length of rectangle: ");
    scanf(" %f",&len);
    printf("Enter the width of rectangle: ");
    scanf(" %f",&wid);

    area = len * wid;
    printf("The area of rectangle is: %.2f",area);
}
