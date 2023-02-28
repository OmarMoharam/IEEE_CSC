//C program to subtract two matrices
#include<stdio.h>
#define MAX 3

// function main begins the excution
int main(void) {
    int arr1[MAX][MAX], arr2[MAX][MAX], arr3[MAX][MAX], row, col;
    
    printf("Enter the first 3x3 matrix: \n");
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            scanf(" %d", &arr1[row][col]);
        } //end for
    } // end for

    printf("Enter the second 3x3 matrix: \n");
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            scanf(" %d", &arr2[row][col]);
        } // end for
    } // end for

    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            arr3[row][col] = arr1[row][col] - arr2[row][col];
        } // end for
    } // end for

    printf("Difference of two matrixes = \n");
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            printf("%d ", arr3[row][col]);
        } // end for
        printf("\n");
    } // end for



    return 0;
} // end function main