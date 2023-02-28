#include<stdio.h>

void main()
{
    int month, type;
    printf("/******PLEASE ENTER THE NUMBER OF THE MONTH******/\n");
    printf(" 1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n" 
                " 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n");
    scanf(" %d",&month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Number of days is 31");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Number of days is 30");
    }
    else if (month == 2)
    {
        printf("What year is this?\n 1.common\n 2.leap\n");
        scanf(" %d",&type);
        if (type == 1)
        {
            printf("Number of days is 28");
        }
        else if (type == 2)
        {
            printf("Number of days is 29");
        }
        else
        {
            printf("You entered the wrong number");
        }
    }
    else
    {
        printf("You entered the wrong number");
    }
}