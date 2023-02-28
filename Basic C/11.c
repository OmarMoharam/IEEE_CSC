#include<stdio.h>
#include<math.h>

void main()
{
    double num, power, res;

    printf("Enter the number: ");
    scanf(" %lf",&num);
    printf("Enter the power: ");
    scanf(" %lf",&power);

    res = pow(num , power);
    printf("The %.2lf power of number %.2lf is: %.2lf",power, num, res);
}