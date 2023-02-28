/*C program to find first occurrence of a word in a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX], search[MAX];
    int check = 0, index, i;

    printf("Enter a string: ");
    gets(str);
    printf("Enter a word to search: ");
    gets(search);

    index = 0;
    while (str[index] != 0)
    {
        if (str[index] == search[0])
        {
            i = 0;
            check = 0;
            while (search[i] != 0)
            {
                if (str[index + i] == search[i])
                {
                    check = 1;
                }
                i++;
            }
            
        }

        if (check == 1)
        {
            break;
        }
        
        index++;
    }

    if (check == 1)
    {
        printf("'%s' is found in index %d",search, index);
    }
    else
    {
        printf("'%s' is not found",search);
    }
    
    
}