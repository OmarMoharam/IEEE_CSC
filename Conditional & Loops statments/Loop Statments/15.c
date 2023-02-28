#include<stdio.h>

void main()
{
    float num;
    int new_num = 0, product = 1, check = 0 , count = 0;
    printf("Enter the number: ");
    scanf(" %f",&num);

    do
    {
        count++;
        num = num / 10;
         
    } while (num >= 1);
    
    while (count > 0)
    {
        check = new_num * 10;
        new_num = num * 10;
        num = num * 10;
        num = num - check;
        new_num = new_num - check;
        product = product * new_num;
        count--;
    }
    printf("%d",product);
    
}