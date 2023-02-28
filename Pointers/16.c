/* C program to find reverse of a string */
#include<stdio.h>
#include<string.h>

#define MAX 100

void main()
{
    char str[MAX], *ptr1, revStr[MAX], *ptr2;
    int len = 0;
    ptr1 = str;
    ptr2 = revStr;

    printf("Enter the string: ");
    gets(str);

    while (*ptr1 != '\0')
    {
        ptr1++;
        len++;
    }

    while (len >= 0)
    {
        *ptr2 = *(--ptr1);
        ptr2++;
    }
    *ptr2 = '\0';

    printf("The reversed string: %s",revStr);
    
    
}