// Write a C program to read and print elements of array. - using recursion

#include<stdio.h>
#define MAX 500

void printArray(int arr[], int begin, int last); //declaration of the function

// function main begin the excution
int main(void) { 
    int N, i;
    int arr[MAX];
    
    printf("Enter the lenght of the array: ");
    scanf("%d",&N);

    for (i = 0 ; i < N ; i++) {
        printf("Enter %d value of the array: ",i);
        scanf("%d",&arr[i]);
    } // end for

    printf("The elemets you entered is:\n");
    printArray(arr, 0, N);

    return 0;
} // end function main


void printArray(int arr[], int begin, int last) {
    if (begin >= last)
        return; // end if
    
    printf("%d\n",arr[begin]);
    printArray(arr, begin + 1, last);
} // end function