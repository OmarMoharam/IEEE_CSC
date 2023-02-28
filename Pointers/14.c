/* C program to concatenate two strings */
#include<stdio.h>

#define MAX 100

void main()
{
    char str1[MAX], str2[MAX], *ptr1, *ptr2;
    ptr1 = str1;
    ptr2 = str2;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    while (*ptr1 != '\0')
    {
        ++ptr1;
    }
    
    while (*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    printf("The concatenated string: %s",str1);
    
}