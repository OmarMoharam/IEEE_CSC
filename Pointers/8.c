/* C program to search element in array using pointers */
#include<stdio.h>

#define MAX 100

void main()
{
    int arr[MAX], *ptr, len, key, counter = 0;
    ptr = arr;

    printf("Enter the length of the array: ");
    scanf(" %d",&len);

    for (size_t i = 0; i < len; i++)
    {
        printf("Enter the %d element: ",i);
        scanf(" %d",&arr[i]);
    }

    printf("\nElement you want to search: ");
    scanf(" %d",&key);


    for (ptr = &arr[0]; ptr <= &arr[len - 1]; ptr++)
    {
        if (*ptr == key)
        {
            printf("The element is found in position %d",counter+1);
            break;
        }
        counter++;
    }

    if (counter == len)
    {
        printf("The element is not found");
    }
}