#include<stdio.h>

int prime (int);
void printing(int, int);

void main()
{
    int min, max;
    printf("Enter the interval: ");
    scanf(" %d %d",&min,&max);
    printf("The prime numbers is: ");
    printing(min, max);
    
}

int prime(int num)
{ 
    for(int i = 2; i <= num/2; i++)    
    {    
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;     
}

void printing(int min , int max)
{
    while (min <= max)
    {
        if(prime(min))
        {
            printf("%d, ",min);
        }
        min++;
    }
    
}