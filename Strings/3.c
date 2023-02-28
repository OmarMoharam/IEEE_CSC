/*C program to concatenate two strings*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char str1[MAX], str2[MAX];
    
    printf("Enter the first string: ");
    scanf(" %s",str1);
    printf("Enter the second string: ");
    scanf(" %s",str2);
    
    printf("The string after concatenate: %s",strcat(str1 , str2));
    

}