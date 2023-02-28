#include<stdio.h>
void print(int min, int max, int ch);

void main()
{
    int max, min,ch;
    printf("Enter the range of the numbers: ");
    scanf(" %d %d",&min,&max);
    printf("What do you want to print?\n1.Even\n2.Odd\n");
    scanf(" %d",&ch);
    print(min , max , ch);
    
    

}

void print(int min, int max, int ch)
{
    if(min > max)
        return;
    if (ch == 1)
    {
        if(min % 2)
        {
            min++;
        }
    }
    else
    {
        if(min % 2)
        {
            min = min;
        }
        else
        {
            min++;
        }
    }
    printf("%d, ", min);
    print(min + 2, max, ch);
}