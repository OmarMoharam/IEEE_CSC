/* C program to sort an array using pointers */
#include<stdio.h>

#define MAX 100

void inputArr(int *arr , int len);
void printArr(int *arr , int len);
void sortArrAscending(int *arr , int len);
void sortArrDescending(int *arr , int len);

void main()
{
    int arr[MAX], len;

    printf("Enter the length of the array: ");
    scanf(" %d",&len);
    inputArr(arr , len);
    
    printf("The array before sorting:\n");
    printArr(arr , len);

    sortArrAscending(arr , len);

    printf("\nThe array after sorting ascending:\n");
    printArr(arr , len);

    sortArrDescending(arr , len);

    printf("\nThe array after sorting descending:\n");
    printArr(arr , len);
}


void inputArr(int *arr , int len)
{
    for (size_t i = 0; i < len; i++)
    {
        scanf(" %d",arr++);
    }
    
}

void printArr(int *arr , int len)
{
    for (size_t i = 0; i < len; i++)
    {
        printf("%d  ",*(arr++));
    }
    
}

void sortArrAscending(int *arr , int len)
{
    int temp;
    int *ptr = arr;

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 0; j < len - 1; j++)
        {
            if (*(ptr + (j + 1)) < *(ptr + j))
            {
                temp = *(ptr + (j + 1));
                *(ptr + (j + 1)) = *(ptr + j);
                *(ptr + j) = temp;
            }
            
        }
        
    }
    
}

void sortArrDescending(int *arr , int len)
{
    int temp;
    int *ptr = arr;

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 0; j < len - 1; j++)
        {
            if (*(ptr + (j + 1)) > *(ptr + j))
            {
                temp = *(ptr + (j + 1));
                *(ptr + (j + 1)) = *(ptr + j);
                *(ptr + j) = temp;
            }
            
        }
        
    }
}