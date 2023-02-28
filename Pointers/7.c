/* C program to reverse an array using pointers */
#include<stdio.h>

#define MAX 100

void main()
{
    int arr[MAX], *ptr, len;
    ptr = arr;

    printf("Enter the length of the array: ");
    scanf(" %d",&len);

    for (size_t i = 0; i < len; i++)
    {
        printf("Enter the %d element: ",i);
        scanf(" %d",&arr[i]);
    }

    printf("Array after reverse:\n");
    for (ptr = &arr[len - 1]; ptr >= &arr[0]; ptr--)
    {
        printf("%d ",*ptr);
    }
    
    

}