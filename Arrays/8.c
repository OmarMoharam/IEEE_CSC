// C program to copy all elements of one array to another
#include<stdio.h>
#define MAX 500

void printArray(int arr[], int begin, int last); //declaration of the function

// function main begins the excution
int main(void) {
    int N, firstArr[MAX], secondArr[MAX];

    printf("Enter the lenght of the array: ");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("Enter %d value of the array: ",i);
        scanf("%d",&firstArr[i]);
    } // end for

    for (int i = 0; i < N; i++)
    {
        secondArr[i] = firstArr[i];
    } // end for
    
    printf("The elemets copied to the other array is:\n");
    printArray(secondArr, 0, N);

    return 0;
} // end function main

void printArray(int arr[], int begin, int last) {
    if (begin >= last)
        return; // end if
    
    printf("%d\n",arr[begin]);
    printArray(arr, begin + 1, last);
} // end function