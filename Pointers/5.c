/* C program to copy one array to another using pointers */
#include<stdio.h>

#define MAX 100

void main()
{
    int arr1[MAX], arr2[MAX], *ptr, len, counter = 0;
    ptr = arr1;

    printf("Enter the length of the array: ");
    scanf(" %d",&len);

    for (size_t i = 0; i < len; i++)
    {
        printf("Enter the %d element: ",i);
        scanf(" %d",&arr1[i]);
    }

    for (ptr = &arr1[0]; ptr <= &arr1[len - 1]; ptr++)
    {
        arr2[counter++] = *ptr;
    }
    
    printf("Array after copy:\n");
    for (size_t i = 0; i < len; i++)
    {
        printf("%d  ",arr2[i]);
    }
    

}