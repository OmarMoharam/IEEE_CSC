#include<stdio.h>
#include<math.h>

void main()
{
    double sqr, num;
    printf("Enter the number: ");
    scanf(" %lf",&num);

    sqr = sqrt(num);
    printf("The square root of this number is: %.3lf",sqr);
}