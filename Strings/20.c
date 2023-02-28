/*C program to count frequency of each character in a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX];
    int frequency[26] = {0}, length;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            frequency[str[i] - 65]++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            frequency[str[i] - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] != 0)
        {
            printf("'%c' is repeated %d times\n",(i + 97), frequency[i]);
        }
        
    }
    
}