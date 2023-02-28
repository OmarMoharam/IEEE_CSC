#include<stdio.h>

void main()
{
    float len,wid,peri;

    printf("Enter the length of rectangle: ");
    scanf(" %f",&len);
    printf("Enter the width of rectangle: ");
    scanf(" %f",&wid);

    peri = (len + wid) * 2;
    printf("The perimeter of rectangle is: %.2f",peri);
}
