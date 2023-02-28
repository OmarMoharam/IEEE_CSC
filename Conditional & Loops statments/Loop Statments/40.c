#include<stdio.h>
#include<math.h>

void main()
{
    int bin, dec = 0, base = 2, num = 0;

    printf("Enter BINARY number: ");
    scanf(" %d",&bin);

    while (bin != 0)
    {
        if (bin % 10 == 1)
        {
            dec = dec + pow(base,num);
        }
        num++;
        bin /= 10;
    }
    printf("The decimal number is : %d",dec);
    
}