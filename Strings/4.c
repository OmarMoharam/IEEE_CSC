/*C program to compare two strings*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str1[MAX], str2[MAX];
    int compare;

    printf("Enter the first string: ");
    scanf(" %s",str1);
    printf("Enter the second string: ");
    scanf(" %s",str2);

    compare = strcmp(str1 , str2);

    if (compare < 0)
    {
        printf("First string is less than Second string");
    }
    else if (compare > 0)
    {
        printf("First string is bigger than Second string");
    }
    else
    {
        printf("First string is equal to Second string");
    }
    
}