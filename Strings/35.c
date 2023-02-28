/*C program to trim leading white spaces from a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX];
    int space = 0, counter;

    printf("Enter a string: ");
    gets(str);

    while (str[space] == ' ')
    {
        space++;
    }
    
    if (space != 0)
    {
        counter = 0;
        while (str[counter + space] != '\0')
        {
            str[counter] = str[counter + space];
            counter++;
        }
        str[counter] = '\0';
    }

    printf("String after remove leading white spaces: %s",str);
    
}