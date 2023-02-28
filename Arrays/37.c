//C program to find determinant of a matrix
#include<stdio.h>
#define MAX 3

// function main begins the excution
int main(void) {
    int arr[MAX][MAX], row, col , det = 0;
    
    printf("Enter the 3x3 matrix: \n");
    for(row = 0; row < MAX; row++) {
        for(col = 0; col < MAX; col++) {
            scanf(" %d", &arr[row][col]);
        } //end for
    } // end for
    
    det = (arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1])) + (-arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0])) + (arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]));
    printf("Determinant of a matrix is: %d",det); 
    return 0;
} // end function main