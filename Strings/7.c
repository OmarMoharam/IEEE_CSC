/*C program to toggle case of each character in a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX];
    int length;
    
    printf("Enter the string: ");
    gets(str);
    length = strlen(str);
    
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            //strlwr(&str[i]);
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            //strupr(&str[i]);
            str[i] = str[i] - 32;
        }
        
    }
    

    printf("The string after toggle: %s",str);

}