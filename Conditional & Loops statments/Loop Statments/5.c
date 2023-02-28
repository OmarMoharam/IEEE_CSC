#include<stdio.h>

void main()
{
    int check = 2;
    for (int i = 1; i <= 100 ; i++)
    {
        if (check == i)
        {
            check+=2;
            continue;
        }
        printf("%d\n",i);
    }
    
}