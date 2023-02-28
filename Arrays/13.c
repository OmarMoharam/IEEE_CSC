// C program count total duplicate elements in array
#include<stdio.h>
#define MAX 500

// function main begins the excution
int main(void) {
    int N, i, arr[MAX], count = 0;
    
    printf("Enter the lenght of the array: ");
    scanf("%d",&N);

    for (i = 0 ; i < N ; i++) {
        printf("Enter %d value of the array: ",i);
        scanf("%d",&arr[i]);
    } // end for

    for(int i = 0; i<N ; i++)
    {
        for(int j = i+1; j<N ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            } // end if
        } // end for
    } // end for
    
    printf("The no. of duplicate numbers is: %d",count);
    return 0;
} // end function main