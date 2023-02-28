#include<stdio.h>

int armstrong (int);
void printing(int, int);

void main()
{
    int min, max;
    printf("Enter the interval: ");
    scanf(" %d %d",&min,&max);
    printf("The armstrong numbers is: ");
    printing(min, max);
    
}

int armstrong(int num)
{ 
    int temp, sum, digit;
    temp = num;
    sum = 0;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;
    }

    if (num == sum)
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
    
}

void printing(int min , int max)
{
    while (min <= max)
    {
        if(armstrong(min))
        {
            printf("%d, ",min);
        }
        min++;
    }
    
}