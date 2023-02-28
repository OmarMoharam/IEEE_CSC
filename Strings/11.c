/*C program to find reverse of a string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char arr[MAX];
    int length;
    
    printf("Enter a string: ");
    scanf(" %s",arr);
    length = strlen(arr);
    
    for (int i = length - 1 ; i >= 0; i--)
    {
        printf("%c",arr[i]);
    }
    arr[length] = '\0';
}