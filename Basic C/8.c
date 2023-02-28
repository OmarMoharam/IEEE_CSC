#include<stdio.h>

void main()
{
    float temp_cel, temp_fah;

    printf("Enter temperture in celsius: ");
    scanf(" %f",&temp_cel);

    temp_fah = temp_cel * 33.8;

    printf("temperture in fahrenheit is: %.2f",temp_fah);
}