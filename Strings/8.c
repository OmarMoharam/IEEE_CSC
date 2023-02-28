/*C program to find total number of alphabets, digits or special characters in a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX];
    int alphabets = 0, digits = 0, specialCharacters = 0;

    printf("Enter the string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            specialCharacters++;
        }
        
        i++;
        
    }
    
    printf("The number of\nAlphabets: %d\nDigits: %d\nSpecial characters: %d\n",alphabets, digits, specialCharacters);
}