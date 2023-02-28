// C program to merge two sorted array
// IMP

#include<stdio.h>
#define MAX 500

void bubble(int arr[], int N); // declaration of the function

// function main begins the excution
int main(void) {
    int len1, len2, len3, firstArr[MAX], secondArr[MAX], thirdArr[MAX];

    printf("Enter the lenght of the first array: ");
    scanf("%d",&len1);

    for (int i = 0 ; i < len1 ; i++) {
        printf("Enter %d value of the first array: ",i);
        scanf("%d",&firstArr[i]);
    } // end for
    

    printf("\n");
    printf("Enter the lenght of the second array: ");
    scanf("%d",&len2);

    for (int i = 0 ; i < len2 ; i++) {
        printf("Enter %d value of the second array: ",i);
        scanf("%d",&secondArr[i]);
    } // end for
    
    
    len3 = len1 + len2;

    for (int i = 0; i < len1; i++)
    {
        thirdArr[i] = firstArr[i];
    } // end for

    for (int i = 0; i < len2; i++)
    {
        thirdArr[i + len1] = secondArr[i];
    } // end for
    
    bubble(thirdArr, len3); //sorting the third array

    printf("The array after merge is: ");
    for (int i = 0; i < len3 ; i++)
    {
        printf("%d ",thirdArr[i]);
    }

    return 0;
} // end function main

void bubble(int arr[], int N) {
    int temp;
    for ( int i = 0; i < N ; i++) {
        for (int j = 0 ; j < N - 1 ; j++) {
            if ( arr[j] > arr[j + 1] ) {
            temp = arr[j+1];
            arr[j+1]=arr[j];
            arr[j]= temp;
            } // end if
        } // end for
    } // end for
}