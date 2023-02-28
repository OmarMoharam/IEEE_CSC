/*C program to search all occurrences of a character in a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX], ch;
    int index = 0, length, counter = 0;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    printf("Enter the character to search: ");
    scanf(" %c",&ch);

    while (str[counter] != '\0')
    {
        if (str[counter] == ch)
        {
            index = counter;
            printf("The '%c' in index: %d\n",ch, index);
        }

        counter++;
    }

}