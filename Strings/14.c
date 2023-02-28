/*C program to find the first occurrence of a character in a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX], ch;
    int index = 0, length;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    printf("Enter the character to search: ");
    scanf(" %c",&ch);

    while (str[index] != '\0')
    {
        if (str[index] == ch)
        {
            break;
        }

        index++;
    }

    if (index == length)
    {
        printf("'%c' is not found",ch);
    }
    else
    {
    printf("The '%c' in index: %d",ch, index);
    }
}