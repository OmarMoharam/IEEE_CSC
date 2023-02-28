// C program to find sum of each row and columns of a matrix
#include<stdio.h>
#define MAX 3

// function main begins the excution
int main(void) {
    int arr[MAX][MAX], row, col, sum = 0;
    
    printf("Enter the 3x3 matrix: \n");
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            scanf(" %d", &arr[row][col]);
        } //end for
    } // end for

    printf("The sum of rows is: ");
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            sum += arr[row][col];
        } // end for
        printf("%d ",sum);
        sum = 0;
    } // end for

    printf("\nThe sum of colums is: ");
    for(col = 0; col < MAX; col++) {
        for(row = 0; row < MAX; row++) {
            sum += arr[row][col];
        } // end for
        printf("%d ",sum);
        sum = 0;
    } // end for
    
    return 0;
} // end function main