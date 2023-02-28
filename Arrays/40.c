// C program to check symmetric matrix
#include<stdio.h>
#define MAX 3

// function main begins the excution
int main(void) {
    int arr[MAX][MAX], arrT[MAX][MAX], row, col, flag = 0;
    
    printf("Enter the 3x3 matrix: \n");
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            scanf(" %d", &arr[row][col]);
        } //end for
    } // end for
    
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            arrT[row][col] = arr[col][row];
        } //end for
    } // end for

    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            if (arr[row][col] != arrT [row][col]) {
                flag++;
            }
            
        } //end for
    } // end for
    
    if (flag != 0) {
        printf("Matrix is not symmetric");
    } // end if
    else {
        printf("Matrix is symmetric");
    } // end else
    return 0;
} // end function main