#include <stdio.h>

int sum(int num);

void main()
{
    int num, sum_digit;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    
    sum_digit = sum(num);
    printf("Sum of digits of %d = %d", num, sum_digit);
}


int sum(int num)
{
    if(num == 0)
        return 0;

    return ((num % 10) + sum(num / 10));
}