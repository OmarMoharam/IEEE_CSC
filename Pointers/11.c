/* C program to multiply two matrix using pointers */
#include<stdio.h>

#define MAX 3

void main()
{
    int matrix1[MAX][MAX], matrix2[MAX][MAX], product[MAX][MAX], sum, row, col;
    
    printf("Enter the first 3x3 matrix: \n");
    for(row = 0; row < MAX; row++) 
    {
        for(col = 0; col < MAX; col++) 
        {
            scanf(" %d", &matrix1[row][col]);
        } 
    }

    printf("Enter the  second 3x3 matrix: \n");
    for(row = 0; row < MAX; row++) 
    {
        for(col = 0; col < MAX; col++) 
        {
            scanf(" %d", &matrix2[row][col]);
        } 
    }


    for(row = 0; row < MAX; row++) 
    {
        for(col = 0; col < MAX; col++) 
        {
            sum = 0;
            
            for (size_t i = 0; i < MAX; i++)
            {
                sum += (*(*(matrix1 + row) + i)) * (*(*(matrix2 + i) + col));
            }

            *(*(product + row) + col) = sum;
            
        } 
    }


    printf("The product of the two matrixes is:\n");
    for(row = 0; row < MAX; row++) 
    {
        for(col = 0; col < MAX; col++) 
        {
            printf("%d ",product[row][col]);
        }
        printf("\n"); 
    }
}