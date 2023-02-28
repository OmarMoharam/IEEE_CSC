/*C program to remove all occurrences of a character from string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX], ch;
    int length, temp;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    printf("Enter the character to remove: ");
    scanf(" %c",&ch);

    temp = length;
    for (int i = 0; i < temp; i++)
    {
        if (str[i] == ch)
        {
            for (int j = i; j < temp; j++)
            {
                str[j] = str[j+1];
            }
            
            length--;
        }
        
    }

    printf("String after removal: %s",str);
    
}