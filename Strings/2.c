/*C program to copy one string to another string*/
#include<stdio.h>
#include<string.h>

#define MAX 100
void main ()
{
    char arr1[MAX], arr2[MAX];
    
    printf("Enter the string: ");
    scanf(" %s",arr1);
    printf("The copied string is : %s",strcpy(arr2 , arr1));

}