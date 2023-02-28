/* return multiple value from function in C programming */
#include<stdio.h>

#define MAX 100

void inputArr(int *arr , int len);
void maxMin(int * arr , int len , int *max , int *min);

void main()
{
    int arr[MAX], len, max, min;

    printf("Enter the length of the array: ");
    scanf(" %d",&len);
    inputArr(arr , len);

    maxMin(arr , len , &max , &min);

    printf("The maximum element in the array: %d\n",max);
    printf("The minimum element in the array: %d\n",min);
}

void inputArr(int *arr , int len)
{
    for (size_t i = 0; i < len; i++)
    {
        scanf(" %d",arr++);
    }
    
}

void maxMin(int * arr , int len , int *max , int *min)
{
    *min = *arr;
    *max = *arr;

    for (size_t i = 0; i < len; i++)
    {
        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
        else if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }
    }
    
}