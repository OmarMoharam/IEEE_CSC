#include<stdio.h>

void main()
{
    int len_cm, len_km;

    printf("Enter length in centimeter: ");
    scanf(" %d",&len_cm);

    len_km = len_cm / 100000;

    printf("Lenght in kilometer is: %d",len_km);
}