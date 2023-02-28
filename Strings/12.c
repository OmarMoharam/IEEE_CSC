/*C program to check whether a string is palindrome or not*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str1[MAX], str2[MAX];
    int length, index = 0;
    
    printf("Enter a string: ");
    gets(str1);
    length = strlen(str1);
    
    for (int i = length - 1 ; i >= 0; i--)
    {
        str2[index++] = str1[i];
    }
    str2[length] = '\0';

    if (strcmp(str1 , str2) == 0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
    
}