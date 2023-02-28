//C program to check whether two matrices are equal or not
#include<stdio.h>
#define MAX 3

// function main begins the excution
int main(void) {
    int arr1[MAX][MAX], arr2[MAX][MAX], row, col, flag = 0;
    
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
            if (arr1[row][col] != arr2 [row][col]) {
                flag++;
            }
            
        } //end for
    } // end for
    
    if (flag != 0) {
        printf("They are not equal");
    } // end if
    else {
        printf("They are equal");
    } // end else
    
    return 0;
} // end function main