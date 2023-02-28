/*C program to find length of a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char arr[MAX];
    
    printf("Enter a string: ");
    scanf(" %s",arr);
    printf("The string length is: %d",strlen(arr));
    
    
}