// C program to sort array in ascending or descending order
#include<stdio.h>
#define MAX 500

void bubble(int arr[], int N); // declaration of the function

// function main begins the excution
int main(void) {
    int N, arr[MAX];

    printf("Enter the lenght of the array: ");
    scanf("%d",&N);

    for (int i = 0 ; i < N ; i++) {
        printf("Enter %d value of the array: ",i);
        scanf("%d",&arr[i]);
    } // end for

    bubble(arr, N);

    printf("The array after sort is: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
} // end function main

void bubble(int arr[], int N) {
    int temp;
    for ( int i = 0; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            if ( arr[j] > arr[j + 1] ) {
            temp = arr[j+1];
            arr[j+1]=arr[j];
            arr[j]= temp;
            } // end if
        } // end for
    } // end for
}