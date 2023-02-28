#include<stdio.h>

void main()
{
    float rad,area,circu,pi = 3.14;

    printf("Enter the raduis of the circle: ");
    scanf(" %f",&rad);

    printf("The diameter of the cirle is: %.2f\n",rad *2);
    printf("The circumference of the cirle is: %.2f\n",2 * pi * rad);
    printf("The area of the cirle is: %.2f",pi * rad * rad);
}