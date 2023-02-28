// C program to find second largest number in array
#include<stdio.h>
#define MAX 500

// function main begin the excution
int main (void) {
    int N, arr[MAX], ndMax, stMax;

    printf("Enter the lenght of the array: ");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("Enter %d value of the array: ",i);
        scanf("%d",&arr[i]);
    } // end for

    stMax = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (stMax < arr[i+1])
        {
            ndMax = stMax;
            stMax = arr[i+1];
        } // end if
        else
        {
            if (ndMax < arr[i+1]) {
                ndMax = arr[i+1];
            } // end if
        } // end else
        
    } // end for

    printf("%d",ndMax);
    
    return 0;
} // end function main