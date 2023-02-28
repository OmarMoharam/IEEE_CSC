// Write a C program to find sum of all array elements. - using recursion

#include<stdio.h>
#define MAX 500

int printArraySum(int arr[], int begin, int last); //declaration of the function

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

    printf("The sum of the array's elements is: %d\n",printArraySum(arr, 0, N));

    return 0;
} // end function main


int printArraySum(int arr[], int begin, int last) {
    if (begin >= last)
        return 0; // end if
    
    return (arr[begin] + printArraySum(arr, begin + 1, last));
    
} // end function