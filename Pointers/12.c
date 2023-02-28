/* C program to find length of a string */
#include<stdio.h>

#define MAX 100

void main()
{
    char str[MAX], *ptr;
    int count = 0;
    ptr = str;

    printf("Enter the string: ");
    gets(str);

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }

    printf("The length of the string is: %d",count);
    
    
}