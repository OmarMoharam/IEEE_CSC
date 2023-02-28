#include <stdio.h>

int fact(int num);


void main()
{
    int num, factorial;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    factorial = fact(num);
    printf("Factorial of %d is %d", num, factorial);
}

int fact(int num)
{
    if(num == 0) 
        return 1;
    else
        return num * fact(num - 1);
}