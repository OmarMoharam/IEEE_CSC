/*C program to convert string to lowercase*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str[MAX];
    
    printf("Enter the string in upper case: ");
    scanf(" %100s",str);
    printf("The string in lower case: %s",strlwr(str));

}