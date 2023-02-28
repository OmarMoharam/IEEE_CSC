// C program to insert an element in array
#include<stdio.h>
#define MAX 500

// function main begins the excution
int main(void) {
    int N, arr[MAX], j, index, value;

    printf("Enter the lenght of the array: ");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("Enter %d value of the array: ",i);
        scanf("%d",&arr[i]);
    } // end for

    printf("Enter the value you want to add: ");
    scanf(" %d",&value);
    printf("Enter the index: ");
    scanf(" %d",&index);

    for (int i = N-1; i >= index; i--) {
        arr[i+1] = arr[i];
    } // end for

    arr[index] = value;
    N++;

    printf("The array after addition is: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    


    return 0;
} // end function main