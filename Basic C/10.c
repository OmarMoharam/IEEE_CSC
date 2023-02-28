#include<stdio.h>

void main()
{
    int days, weeks, years;

    printf("Enter the number of days: ");
    scanf(" %d",&days);

    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("Number of days is: %d\n",days);
    printf("Number of weeks is: %d\n",weeks);
    printf("Number of days is: %d",years);
}