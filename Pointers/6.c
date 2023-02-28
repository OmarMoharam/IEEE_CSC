/* C program to swap two arrays using pointers */
#include<stdio.h>

#define MAX 100

void main()
{
    int arr1[MAX], arr2[MAX], len;
    int *temp;
    *temp = 0;

    printf("Enter the length of the two arrays: ");
    scanf(" %d",&len);

    for (size_t i = 0; i < len; i++)
    {
        printf("Enter the %d element for array 1: ",i);
        scanf(" %d",&arr1[i]);
    }

    printf("\n");
    for (size_t i = 0; i < len; i++)
    {
        printf("Enter the %d element for array 2: ",i);
        scanf(" %d",&arr2[i]);
    }

    for (size_t i = 0; i < len; i++)
    {
        *temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = *temp;
    }

    printf("Array 1 after swapping:\n");
    for (size_t i = 0; i < len; i++)
    {
        printf("%d  ",arr1[i]);
    }

    printf("\n");
    printf("Array 2 after swapping:\n");
    for (size_t i = 0; i < len; i++)
    {
        printf("%d  ",arr2[i]);
    }

}