#include<stdio.h>
#define pi 3.14

float diameter(float);
float circum(float);
float area(float);

void main()
{
    float rad;
    printf("Enter the radius of the circle: ");
    scanf(" %f",&rad);
    printf("Diameter: %0.2f\n",diameter(rad));
    printf("Circumference: %0.2f\n",circum(rad));
    printf("Area: %0.2f\n",area(rad));
}

float diameter(float rad)
{
    float dia;
    dia = rad * 2;
    return dia;
}

float circum(float rad)
{
    float cir;
    cir = 2 * pi * rad;
    return cir;
}


float area(float rad)
{
    float ar;
    ar = pi * rad * rad;
    return ar;
}